#include "NPCInteractionComponent.h"
#include "Net/UnrealNetwork.h"

class UStaticMesh;
class ADroppedInventoryItemPickup;
class AActor;

void UNPCInteractionComponent::TakeObjectFromPlayerThenGiveBack(bool bUseAlternateStance, FMissionEventReference InMissionEvent, FLatentActionInfo LatentInfo) {
}

void UNPCInteractionComponent::TakeObjectFromPlayer(bool bUseAlternateStance, FMissionEventReference InMissionEvent, FLatentActionInfo LatentInfo) {
}

void UNPCInteractionComponent::SpawnedLootCallback(ADroppedInventoryItemPickup* Pickup) {
}

void UNPCInteractionComponent::SetObjectToHold(UStaticMesh* TheStaticMeshToHold, const FItemPoolInfo& ThePickupToHold, FTransform InOffsetTransform, FName InHandSocketName, float InPutAwayTimeOffset, float InTakeOutTimeOffset) {
}

void UNPCInteractionComponent::OnRep_ReplicatedState(FReplicatedInteractionInfo OldReplicatedState) {
}

void UNPCInteractionComponent::LootDestroyedCallback(AActor* DestroyedActor) {
}

void UNPCInteractionComponent::GiveObjectToPlayer(bool bUseAlternateStance, FMissionEventReference InMissionEvent, FLatentActionInfo LatentInfo) {
}

void UNPCInteractionComponent::ExamineActionFinishedCallback(EGbxActionEndState EndState) {
}

void UNPCInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNPCInteractionComponent, ReplicatedState);
}

UNPCInteractionComponent::UNPCInteractionComponent() {
    this->StanceGiveToPlayer = NULL;
    this->StanceGiveToPlayerAlt = NULL;
    this->StanceTakeFromPlayer = NULL;
    this->StanceTakeFromPlayerAlt = NULL;
    this->AttractParticleSystem = NULL;
    this->GhostMaterialForHeldObjects = NULL;
    this->AudioEventWhenItemChangesHands = NULL;
    this->DefaultHandSocketName = TEXT("R_Hand_Object");
    this->AttractParticleComp = NULL;
    this->CallbackTarget = NULL;
}

