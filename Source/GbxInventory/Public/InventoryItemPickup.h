#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EPickupActionType.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemPickupClientSpawnData.h"
#include "InventoryItemActivatedEventDelegate.h"
#include "InventoryItemPickedUpEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EDropLifeSpanType.h"
#include "Engine/NetSerialization.h"
#include "UseEvent.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemPickup.generated.h"

class UMeshComponent;
class UWwiseEvent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class UGbxCondition;
class UInventoryCategoryData;
class APlayerController;
class USphereComponent;
class UInventoryData;
class UInventoryBalanceStateComponent;
class UGbxAction;
class AController;
class UParticleSystem;

UCLASS()
class GBXINVENTORY_API AInventoryItemPickup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PickupAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* CompletePickupAudioEvent;
    
    UPROPERTY(EditAnywhere)
    bool DestroyOnPickup;
    
    UPROPERTY(EditAnywhere)
    float UseFailBumpUpVelocity;
    
    UPROPERTY(EditAnywhere)
    float UseFailBumpBaseRotation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PickedUpBy)
    AActor* PickedUpBy;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UStaticMeshComponent* PickupMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USkeletalMeshComponent* PickupSkelMesh;
    
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> PickupActorParticles;
    
    UPROPERTY(Transient)
    int32 Quantity;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    uint8 bCanOnlyBePickedUpByOwnerController: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHighDetail: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSharedWithAllPlayers: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSharedPlayersMustBeOnFriendlyTeam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReplicatePickupActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 StaticPickup: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseInventoryDataPickupActionType: 1;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> DefaultPickupActorClass;
    
    UPROPERTY(EditAnywhere)
    float MaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    EPickupActionType DefaultPickupActionType;
    
    UPROPERTY(EditAnywhere)
    EPickupActionType StaticPickupActionType;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* CanBeTouchedCondition;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    UInventoryCategoryData* PickupCategory;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemActivatedEvent OnPickupSpawnUnpaused;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemActivatedEvent OnPickupSpawnActive;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemActivatedEvent OnPickupIsActive;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemPickedUpEvent OnPickedUp;
    
    UPROPERTY()
    FVector StaticLocation;
    
    UPROPERTY()
    FRotator StaticRotation;
    
    UPROPERTY(Transient)
    bool NotAddedToInventory;
    
    UPROPERTY(EditAnywhere)
    float PickupSphereRadius;
    
    UPROPERTY(EditAnywhere)
    float PickupSphereRadiusHideScale;
    
    UPROPERTY(Export, Transient)
    USphereComponent* PickupSphereComponent;
    
    UPROPERTY(Transient)
    UInventoryData* AssociatedInventoryData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText OverrideErrorText;
    
    UPROPERTY()
    bool PlacedPickup;
    
protected:
    UPROPERTY(Export, Transient)
    UInventoryBalanceStateComponent* CachedInventoryBalanceComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* PickupActor;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PickupActor)
    AActor* ReplicatedPickupActor;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PickupActorClientSpawnData)
    FInventoryItemPickupClientSpawnData PickupActorClientSpawnData;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bPickupSpawnPaused: 1;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsActive)
    uint8 bIsActive: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BumpAngularDir)
    FVector_NetQuantizeNormal BumpAngularDir;
    
private:
    UPROPERTY(Transient)
    TSubclassOf<UGbxAction> LootSpawnAction;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepLootSpawnAction)
    TSubclassOf<UGbxAction> RepLootSpawnAction;
    
public:
    AInventoryItemPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void WaitForBalanceState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, AController* OwnerController);
    
private:
    UFUNCTION()
    void ResetBumpOnPickupFail();
    
public:
    UFUNCTION()
    void OnUsedBy(const FUseEvent& UseEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRespawnEvent();
    
private:
    UFUNCTION()
    void OnRep_RepLootSpawnAction();
    
public:
    UFUNCTION()
    void OnRep_PickupActorClientSpawnData();
    
    UFUNCTION()
    void OnRep_PickupActor();
    
    UFUNCTION()
    void OnRep_PickedUpBy();
    
    UFUNCTION()
    void OnRep_IsActive();
    
protected:
    UFUNCTION()
    void OnRep_BumpAngularDir();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedUpEvent(AActor* WasPickedUpBy);
    
    UFUNCTION()
    void OnLookedAtByPlayer(APlayerController* InstigatingPlayer, bool bCanInteractWith, FVector NewUsableComponentImpactPoint, float NewUsableDistanceAway);
    
    UFUNCTION(BlueprintCallable)
    bool IsPickupInitialized();
    
    UFUNCTION(BlueprintCallable)
    void GiveInventoryToUser(AActor* Other, bool bAutoEquip);
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystem* GetInventoryRarityLootBeamOverride() const;
    
    UFUNCTION(BlueprintPure)
    UWwiseEvent* GetInventoryRarityLootAudioStinger() const;
    
    UFUNCTION(BlueprintPure)
    EDropLifeSpanType GetInventoryRarityLifeSpanType() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetInventoryRarityColorOutline() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetInventoryRarityColorFX() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInventoryDisplayRarityOutline() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryBalanceStateComponent* GetInventoryBalanceStateComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePickup();
    
    UFUNCTION(BlueprintCallable)
    bool CanBePickedUp(AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePickup();
    
    UFUNCTION(BlueprintCallable)
    void ActivateAfterSpawnDelay();
    
};

