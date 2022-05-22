#include "GbxNavMovementOptions.h"

FGbxNavMovementOptions::FGbxNavMovementOptions() {
    this->PathFindingData = NULL;
    this->MoveStyleDefault = EGbxNavMoveStyleDefault::Strafe;
    this->bCanReverse = false;
    this->ReverseGoalDistance = 0.00f;
    this->bCanChangePitchWhenStrafeFlying = false;
    this->IdleDirectionTime = 0.00f;
    this->NearUserEdgeTimeThreshold = 0.00f;
    this->UserEdgeEnterDistancePercent = 0.00f;
    this->bMustBeFacingUserEdgeBeforeEntering = false;
}

