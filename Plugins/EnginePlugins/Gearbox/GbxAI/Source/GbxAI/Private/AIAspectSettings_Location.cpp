#include "AIAspectSettings_Location.h"

FAIAspectSettings_Location::FAIAspectSettings_Location() {
    this->TargetChangeTransition = EAIActionResultTransition::Stop;
    this->bUseTargetQuery = false;
    this->bCanMove = false;
}

