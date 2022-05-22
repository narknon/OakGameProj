#include "MantleGlobalData.h"

FMantleGlobalData::FMantleGlobalData() {
    this->DistanceToLookAheadForWalls = 0;
    this->FootCollisionHeight = 0.00f;
    this->HeadCollisionHeight = 0.00f;
    this->MinWallSlope = 0.00f;
    this->MaxAngleToKeepMantleCache = 0.00f;
    this->TimeToHoldValidClimbLocationSeconds = 0.00f;
    this->MaxDegreeAngleFromForward = 0.00f;
    this->LookAngleRange = 0.00f;
    this->bShowPromptWhenAvailable = false;
    this->DelayBeforeShowingPrompt = 0.00f;
    this->MaxAscendingSpeedZ = 0.00f;
    this->MaxDescendingSpeedZ = 0.00f;
    this->MinLedgeHeightToStillAllowMantle = 0.00f;
    this->MaxPossibleLedgeHeight = 0.00f;
    this->MaxPossibleLedgeDistance = 0.00f;
    this->ClientValidationTolerance = 0.00f;
    this->MinPassiveMantleHeight_Default = 0.00f;
    this->MinPassiveMantleHeight_ForwardInput = 0.00f;
    this->bIgnoreTeamCollision = false;
}

