#include "AIAspectSettings_Orbit.h"

FAIAspectSettings_Orbit::FAIAspectSettings_Orbit() {
    this->Direction = EOrbitDirection::Left;
    this->SearchRadius = 0.00f;
    this->bRespectCombatTerritory = false;
}

