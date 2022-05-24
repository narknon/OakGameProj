#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "PlayerBeginInteractionDelegate.h"
#include "PlayerStopInteractionDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UseEvent.h"
#include "AdvancedInteractiveObject.generated.h"

class AActor;
class AAdvancedInteractiveObjectProxy;
class UAIO_CameraData;
class ASpawner;
class UUsableComponent;
class UGbxMenuData;
class UParticleSystem;
class AOakPlayerController;
class UObject;
class APlayerController;

UCLASS()
class OAKGAME_API AAdvancedInteractiveObject : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAIO_CameraData* CameraData;
    
    UPROPERTY(EditAnywhere)
    FName CameraMode;
    
    UPROPERTY(EditAnywhere)
    float CameraBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float CameraBlendOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CameraExitTransitionDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeCameraExitTransitionStarts;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBringUpEchoDevice;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideEchoDeviceEquipDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FName EchoDeviceMenuName;
    
    UPROPERTY(EditDefaultsOnly)
    FName EchoDeviceIdleScreenName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLockPlayerMovement;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLockPlayerWeaponUsage;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTrackNearbyPlayers;
    
    UPROPERTY(EditAnywhere)
    bool bHideHUDInstantly;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerBeginInteraction PlayerBeginInteraction;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerStopInteraction PlayerStopInteraction;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AAdvancedInteractiveObjectProxy> ProxyActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableActorCulling;
    
    UPROPERTY(EditInstanceOnly)
    bool bIgnoreAssociatedNPCForCulling;
    
    UPROPERTY(EditInstanceOnly)
    TArray<TSoftObjectPtr<ASpawner>> AssociatedNPCSpawners;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> IgnoreCullingForActorClass;
    
    UPROPERTY(Export, VisibleAnywhere)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* AIOMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseParticleBackdrop;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseDefaultParticleBackdrop;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* BackdropParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* BackdropParticleSystemOff;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsAnyoneInInteractRange;
    
    UPROPERTY(Transient)
    TArray<AOakPlayerController*> PlayersInInteractRange;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bIsAnyoneInteracting)
    bool bIsAnyoneInteracting;
    
    UPROPERTY(Transient)
    TArray<AOakPlayerController*> InteractingPlayers;
    
    UPROPERTY(Transient)
    TArray<AAdvancedInteractiveObjectProxy*> LocalProxies;
    
private:
    UPROPERTY(Transient)
    AOakPlayerController* LookedAtByController;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> AssociatedPushedMenu;
    
public:
    UPROPERTY(EditDefaultsOnly)
    bool bUseProxyForPlayerAlert;
    
    AAdvancedInteractiveObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_bIsAnyoneInteracting();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerStopInteraction(AOakPlayerController* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExitedInteractRange(AOakPlayerController* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnteredInteractRange(AOakPlayerController* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerBeginInteraction(AOakPlayerController* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNoPlayersNowInInteractRange();
    
    UFUNCTION()
    void OnLookedAwayFromByPlayer();
    
    UFUNCTION()
    void OnLookedAtByPlayer(APlayerController* InstigatingPlayer, bool bCanInteractWith, FVector NewUsableComponentImpactPoint, float NewUsableDistanceAway);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnyPlayersNowInInteractRange();
    
protected:
    UFUNCTION()
    void NotifyUsed(const FUseEvent& UseEvent);
    
    UFUNCTION()
    void HandleActorDestroyed(AActor* Actor);
    
};

