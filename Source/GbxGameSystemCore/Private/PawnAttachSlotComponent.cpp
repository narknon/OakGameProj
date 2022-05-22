#include "PawnAttachSlotComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class APawn;

void UPawnAttachSlotComponent::SetPersistentAttachSocketName(FName SocketName) {
}

void UPawnAttachSlotComponent::SetDetachabilityLocked(bool bLock, FName Reason) {
}

void UPawnAttachSlotComponent::RequestDetachPawn() {
}

void UPawnAttachSlotComponent::OnRep_AttachState() {
}

void UPawnAttachSlotComponent::ManuallyFinishAttach() {
}

bool UPawnAttachSlotComponent::IsOccupied(bool bIncludeDetaching) const {
    return false;
}

void UPawnAttachSlotComponent::HandleActorDestroyed(AActor* Actor) {
}

FTransform UPawnAttachSlotComponent::GetPersistentAttachSocketTransform() const {
    return FTransform{};
}

APawn* UPawnAttachSlotComponent::GetOccupant(bool bIncludeDetaching) const {
    return NULL;
}

EPawnAttachStatus UPawnAttachSlotComponent::GetAttachStatus() const {
    return EPawnAttachStatus::Unoccupied;
}

void UPawnAttachSlotComponent::DetachPawn(bool bInstant, bool bSkipPlacement) {
}

void UPawnAttachSlotComponent::AttachPawn(APawn* AttachingPawn, bool bInstant) {
}

void UPawnAttachSlotComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPawnAttachSlotComponent, AttachState);
}

UPawnAttachSlotComponent::UPawnAttachSlotComponent() {
    this->PersistentPawnAction = NULL;
    this->bManualAttachTransitionDuration = false;
    this->bEvaluateAttachTransitionBeforeModifyingPawn = false;
    this->bOffsetFallbackDetachLocationByActorHeight = true;
    this->bUseBaseOwnerLocationForSafeLocationTrace = false;
    this->bUseBaseOwnerLocationForFallbackDetachLocation = false;
    this->PossessionRule = EAttachmentPossessionRule::PossessBase;
    this->bPossessWhenAttachmentStarts = true;
    this->bRestorePossessionWhenDetachStarts = false;
    this->bIsHijackable = false;
    this->bCanHijackPlayer = false;
    this->bCanHijackFriendly = false;
    this->bCanBeUsedByPlayers = true;
    this->bForceUntargetable = true;
    this->bForceGodMode = true;
    this->bForceHidden = false;
    this->bForceNoCollision = true;
    this->bDisableHitReaction = true;
    this->bCollideDuringTransitions = false;
    this->bMirrorTeam = false;
    this->bForceUnCrouch = true;
    this->bIgnoreCollisionWithBase = true;
    this->bBaseIgnoreCollisionWithPawn = true;
    this->bForceSkeletalOptimizations = false;
    this->bDisableDelayRootMotionOneFrameDuringDetach = false;
    this->bDisableOverlapOptimization = false;
    this->bGenerateOverlapEventOnDetach = false;
}

