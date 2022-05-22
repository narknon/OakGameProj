#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGbxActionEndState.h"
#include "GameplayTagContainer.h"
#include "ReplicatedInteractionInfo.h"
#include "MissionEventReference.h"
#include "Engine/LatentActionManager.h"
#include "ItemPoolInfo.h"
#include "UObject/NoExportTypes.h"
#include "NPCInteractionComponent.generated.h"

class UWwiseEvent;
class UStanceDataProvider;
class ADroppedInventoryItemPickup;
class UParticleSystem;
class UMaterialInterface;
class UParticleSystemComponent;
class UObject;
class UStaticMesh;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UNPCInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCInteractionLootEvent, ADroppedInventoryItemPickup*, Pickup);
    
    UPROPERTY(BlueprintAssignable)
    FNPCInteractionLootEvent OnInteractionLootSpawned;
    
private:
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* StanceGiveToPlayer;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* StanceGiveToPlayerAlt;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* StanceTakeFromPlayer;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* StanceTakeFromPlayerAlt;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ExamineItemActionKey;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* AttractParticleSystem;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* GhostMaterialForHeldObjects;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* AudioEventWhenItemChangesHands;
    
    UPROPERTY(EditAnywhere)
    FName TagForHeldObjectStaticMeshComponent;
    
    UPROPERTY(EditAnywhere)
    FName DefaultHandSocketName;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedState)
    FReplicatedInteractionInfo ReplicatedState;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* AttractParticleComp;
    
    UPROPERTY(Transient)
    UObject* CallbackTarget;
    
public:
    UNPCInteractionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TakeObjectFromPlayerThenGiveBack(bool bUseAlternateStance, FMissionEventReference InMissionEvent, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TakeObjectFromPlayer(bool bUseAlternateStance, FMissionEventReference InMissionEvent, FLatentActionInfo LatentInfo);
    
    UFUNCTION()
    void SpawnedLootCallback(ADroppedInventoryItemPickup* Pickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetObjectToHold(UStaticMesh* TheStaticMeshToHold, const FItemPoolInfo& ThePickupToHold, FTransform InOffsetTransform, FName InHandSocketName, float InPutAwayTimeOffset, float InTakeOutTimeOffset);
    
    UFUNCTION()
    void OnRep_ReplicatedState(FReplicatedInteractionInfo OldReplicatedState);
    
    UFUNCTION()
    void LootDestroyedCallback(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GiveObjectToPlayer(bool bUseAlternateStance, FMissionEventReference InMissionEvent, FLatentActionInfo LatentInfo);
    
    UFUNCTION()
    void ExamineActionFinishedCallback(EGbxActionEndState EndState);
    
};

