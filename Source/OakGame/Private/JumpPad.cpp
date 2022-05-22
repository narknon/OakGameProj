#include "JumpPad.h"

class UPrimitiveComponent;
class AActor;
class AOakCharacter;

void AJumpPad::SetJumpPadEnabled(bool bEnabled) {
}


void AJumpPad::OnCharacterTouch(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AJumpPad::Launch(AOakCharacter* Character) {
}

void AJumpPad::GetValidAssociatedComponentNames(TArray<FName>& Array) const {
}

AJumpPad::AJumpPad() {
    this->LaunchTouchComponent = NULL;
    this->ControlledMoveClass = NULL;
    this->LaunchCondition = NULL;
    this->bLockInstanceLaunchSpeed = false;
    this->LaunchSpeed = 0.00f;
    this->LaunchAngle = 0.00f;
    this->bLinkDestination = true;
    this->bSpawnUserEdge = false;
    this->LinkedUserEdge = NULL;
}

