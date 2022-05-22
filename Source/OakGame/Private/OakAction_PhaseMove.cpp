#include "OakAction_PhaseMove.h"
#include "Templates/SubclassOf.h"

class ACharacter;
class UOakAction_PhaseMove;
class AActor;

void UOakAction_PhaseMove::PlayPhaseMove(TSubclassOf<UOakAction_PhaseMove> MoveAction, ACharacter* Character, AActor* MoveTarget, FTransform TargetEndTransform, float Duration, AActor* HoverTarget) {
}

AActor* UOakAction_PhaseMove::K2_GetMoveTarget() const {
    return NULL;
}

AActor* UOakAction_PhaseMove::K2_GetHoverTarget() const {
    return NULL;
}

ACharacter* UOakAction_PhaseMove::K2_GetCharacter() const {
    return NULL;
}

UOakAction_PhaseMove::UOakAction_PhaseMove() {
    this->HoverAltitude = 150.00f;
    this->HoverRadius = 50.00f;
    this->HoverAccelerationTime = 0.25f;
    this->HoverSpeed = 1700.00f;
}

