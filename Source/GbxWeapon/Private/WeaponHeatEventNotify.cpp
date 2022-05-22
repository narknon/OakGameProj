#include "WeaponHeatEventNotify.h"

FWeaponHeatEventNotify::FWeaponHeatEventNotify() {
    this->Threshold = 0.00f;
    this->Comparision = EWeaponHeatComparisonOperatorType::LessThan;
}

