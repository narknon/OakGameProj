#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPickupFlyToAlignmentType.h"
#include "DroppedInventoryItemPickup.h"
#include "PickupFlyToAbleInterface.h"
#include "SpawnedActorInterface.h"
#include "PlayerAlertableInterface.h"
#include "EVaultRewardType.h"
#include "EPickupFlyToSettingsType.h"
#include "EPlayerAlertType.h"
#include "OakInventoryItemPickup.generated.h"

class UUsableComponent;
class UItemPoolData;
class UPickupFlyToData;
class UParticleSystemComponent;
class UInventoryRarityData;
class UMissionIconComponent;
class AActor;

UCLASS()
class OAKGAME_API AOakInventoryItemPickup : public ADroppedInventoryItemPickup, public ISpawnedActorInterface, public IPickupFlyToAbleInterface, public IPlayerAlertableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemCardDelay;
    
    UPROPERTY(EditAnywhere)
    bool bFlyToOnPickup;
    
    UPROPERTY(EditAnywhere)
    EPickupFlyToAlignmentType FlyToAlignment;
    
    UPROPERTY(EditAnywhere)
    FRotator FlyToAlignmentOffset;
    
    UPROPERTY(EditAnywhere)
    UPickupFlyToData* DroppedPickupFlyToSettings;
    
    UPROPERTY(EditAnywhere)
    UPickupFlyToData* ContainerPickupFlyToSettings;
    
    UPROPERTY(EditAnywhere)
    UPickupFlyToData* AutoLootContainerPickupFlyToSettings;
    
    UPROPERTY(EditAnywhere)
    UItemPoolData* DefaultPickupItemPool;
    
    UPROPERTY(EditAnywhere)
    FName ItemCardSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVaultRewardType VaultRewardType;
    
    UPROPERTY(EditAnywhere)
    uint8 bTouchPickupOnFoot: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTouchPickupInVehicle: 1;
    
protected:
    UPROPERTY(Export, Transient)
    UUsableComponent* CachedUsableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UParticleSystemComponent* LootBeamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoPickupDelay;
    
    UPROPERTY(EditAnywhere)
    bool bMassPickupable;
    
    UPROPERTY(EditAnywhere)
    bool bCauseMassPickupOnHoldUse;
    
    UPROPERTY(Replicated, Transient)
    EPickupFlyToSettingsType DesiredFlyToType;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bIsInstanced)
    uint8 bIsInstanced: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bPlayedCallout: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bPickupEquipped: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NoLootBeam)
    uint8 bNoLootBeam: 1;
    
    UPROPERTY(Transient)
    UInventoryRarityData* AssociatedInventoryRarityData;
    
    UPROPERTY(Export, Transient)
    UMissionIconComponent* MissionIconComponent;
    
public:
    UPROPERTY(EditAnywhere)
    EPlayerAlertType PlayerAlertType;
    
    AOakInventoryItemPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void TryMassPickupBy(AActor* GiveToActor);
    
protected:
    UFUNCTION()
    void SetupZoneMapIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNoLootBeam(bool bNoBeam);
    
protected:
    UFUNCTION()
    void OnRep_NoLootBeam();
    
    UFUNCTION()
    void OnRep_bIsInstanced();
    
private:
    UFUNCTION()
    void HandleActorDestroyed(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

