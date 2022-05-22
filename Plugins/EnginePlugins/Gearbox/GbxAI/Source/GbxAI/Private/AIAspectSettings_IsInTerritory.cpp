#include "AIAspectSettings_IsInTerritory.h"

FAIAspectSettings_IsInTerritory::FAIAspectSettings_IsInTerritory() {
    this->TerritoryArea = ETerritoryType::Patrol;
    this->TimeThreshold = 0.00f;
}

