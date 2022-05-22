#include "TargetActorInfo.h"

FTargetActorInfo::FTargetActorInfo() {
    this->TargetScore = 0.00f;
    this->AttitudeTowardTarget = ETeamAttitude::Friendly;
    this->AttitudeFromTarget = ETeamAttitude::Friendly;
    this->TargetListIndex = 0;
}

