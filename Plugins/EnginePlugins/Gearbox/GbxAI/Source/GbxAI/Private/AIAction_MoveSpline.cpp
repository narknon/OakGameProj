#include "AIAction_MoveSpline.h"

class AActor;
class UObject;

bool UAIAction_MoveSpline::SetupMoveSpline(AActor* TargetActor, UObject* TargetSpline, float Offset, bool bIsReverse) {
    return false;
}

bool UAIAction_MoveSpline::ChangeSplineOffset(AActor* TargetActor, float Offset) {
    return false;
}

UAIAction_MoveSpline::UAIAction_MoveSpline() {
}

