#include "FrontendStandInAnimInstance.h"

UFrontendStandInAnimInstance::UFrontendStandInAnimInstance() {
    this->bIsCharacterSelect = false;
    this->StandInType = EFrontendStandInAnimType::Default;
    this->StandInSlotIndex = 0;
    this->bIsInNeutralPose = false;
    this->StandInGlobals = NULL;
    this->Character = NULL;
    this->PlayerStandIn = NULL;
}

