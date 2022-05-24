#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "LevelActorPersistenceInterface.h"
#include "EMissionDrivenLootableType.h"
#include "LootableDirectionalResponse.h"
#include "ELootableOpenReason.h"
#include "ELootSpawnTiming.h"
#include "ConditionalLootableInteractionResponse.h"
#include "LootablePersistenceData.h"
#include "LootableInteractionResponse.h"
#include "LootablePileInteractionResponse.h"
#include "LootablePileDamageInteraction.h"
#include "LootableMeshSwapData.h"
#include "MissionObjectiveReferenceWeak.h"
#include "MissionEventReference.h"
#include "UObject/NoExportTypes.h"
#include "LootableAnimState.h"
#include "LootableEventDelegate.h"
#include "UseEvent.h"
#include "LootableObjectDamageEventDetails.h"
#include "Engine/DataTable.h"
#include "LootableObject.generated.h"

class ULootableBalanceData;
class UGbxCondition;
class UUsableComponent;
class UDamageSource;
class APlayerController;
class USkeletalMeshComponent;
class UOakMissionIconComponent;
class UOakLootableComponent;
class UMissionObserverComponent;

UCLASS()
class ALootableObject : public AInteractiveObject, public ILevelActorPersistenceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULootableBalanceData* LootDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ELootSpawnTiming SpawnLootTiming;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool ShouldAttachLoot;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMaintainStateAcrossMapLoads;
    
    UPROPERTY(EditDefaultsOnly)
    FLootablePersistenceData PersistenceData;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bOptOutOfLevelPersistence: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOpenInResponseToDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseOverlapEventsIfDamageable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSimulatePhysicsAfterOpening: 1;
    
    UPROPERTY(EditAnywhere)
    float DelayBeforeSimulatePhysics;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FLootableDirectionalResponse> DamagedOpeningInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FLootableInteractionResponse> OpeningInteractions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FConditionalLootableInteractionResponse> ConditionalOpeningInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FLootableInteractionResponse> ClosingInteractions;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsBonePile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> Bones;
    
    UPROPERTY(EditDefaultsOnly)
    FLootablePileInteractionResponse DefaultBonePileResponse;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FLootablePileDamageInteraction> BonePileDamageResponses;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseMeshSwap;
    
    UPROPERTY(EditDefaultsOnly)
    FLootableMeshSwapData MeshSwapData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> PhysicsBodiesToDisablePawnCollisionWithAfterOpening;
    
    UPROPERTY(EditAnywhere)
    bool bSearchableByEQS;
    
    UPROPERTY()
    bool bControlledByMissionPickupObjective;
    
    UPROPERTY(EditInstanceOnly)
    EMissionDrivenLootableType MissionDrivenType;
    
    UPROPERTY(EditInstanceOnly)
    FMissionObjectiveReferenceWeak SelfMissionObjective;
    
    UPROPERTY(VisibleInstanceOnly)
    FMissionObjectiveReferenceWeak PickupMissionObjective;
    
    UPROPERTY(EditInstanceOnly)
    FMissionEventReference MissionEventToSendOnOpening;
    
    UPROPERTY(Instanced)
    UGbxCondition* OpenedCondition;
    
    UPROPERTY(Instanced)
    UGbxCondition* ClosedCondition;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UUsableComponent* UsableComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerController* PlayerThatOpenedMe;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ELootableOpenReason OpenReason;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UDamageSource> OpeningDamageSource;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector OpeningDamageHitForce;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector OpeningDamageHitLocation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AnimState)
    FLootableAnimState AnimState;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(Export, Transient)
    UOakLootableComponent* LootableComponent;
    
    UPROPERTY(Export, Transient)
    UOakMissionIconComponent* MissionIconComponent;
    
    UPROPERTY(Export, Transient)
    UMissionObserverComponent* MissionObserverComponent;
    
    UPROPERTY(Transient)
    FLootableInteractionResponse CurrentResponse;
    
    UPROPERTY(Replicated, Transient)
    int8 CustomResponseIdx;
    
public:
    UPROPERTY(BlueprintAssignable)
    FLootableEvent OnOpened;
    
    UPROPERTY(BlueprintAssignable)
    FLootableEvent OnOpening;
    
    ALootableObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnUsedBy(const FUseEvent& UseEvent);
    
    UFUNCTION()
    void OnRep_AnimState();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLootableTakeDamage(const FLootableObjectDamageEventDetails& Details);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DoLootSpawning();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisassociateSpawnedLootFromThis();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearCurrentInteractionResponse();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeBalanceTableRow(const FDataTableRowHandle& NewBalanceTableRow);
    
    
    // Fix for true pure virtual functions not being implemented
};

