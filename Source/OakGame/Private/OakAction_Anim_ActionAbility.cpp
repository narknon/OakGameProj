#include "OakAction_Anim_ActionAbility.h"
#include "Templates/SubclassOf.h"

class UOakControlledMove_ActionAbility;
class AActor;

bool UOakAction_Anim_ActionAbility::StartedOwnedControlledMove(TSubclassOf<UOakControlledMove_ActionAbility> ControlledMoveClass, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, AActor* TargetActor, FVector TargetLocation) {
    return false;
}

void UOakAction_Anim_ActionAbility::SetActionSucceeded(bool bSucceeded) {
}

void UOakAction_Anim_ActionAbility::ReleaseActionLock() {
}


void UOakAction_Anim_ActionAbility::JumpToMontageSection(FName SectionName) {
}

bool UOakAction_Anim_ActionAbility::IsLocallyControlled() const {
    return false;
}

UOakAction_Anim_ActionAbility::UOakAction_Anim_ActionAbility() {
    this->UnconditionalEndAction = EOakAnimActionAbilityEndAction::None;
    this->OwnerPlayer = NULL;
    this->OwnerPlayerController = NULL;
    this->OwnerActionAbility = NULL;
    this->bIsShuttingDown = false;
    this->bBlocksActionAbilityShutdown = false;
    this->bLockMantling = true;
    this->bBlockPlayerLandingNotification = false;
    this->bActionSucceeded = true;
}

