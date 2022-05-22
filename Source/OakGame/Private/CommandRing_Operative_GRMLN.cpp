#include "CommandRing_Operative_GRMLN.h"

void ACommandRing_Operative_GRMLN::StopLookingForTarget() {
}

void ACommandRing_Operative_GRMLN::StartLookingForTarget() {
}

ACommandRing_Operative_GRMLN::ACommandRing_Operative_GRMLN() {
    this->BeamComponent = NULL;
    this->BeamStartEvent = NULL;
    this->BeamStopEvent = NULL;
    this->OwnerActionAbility = NULL;
}

