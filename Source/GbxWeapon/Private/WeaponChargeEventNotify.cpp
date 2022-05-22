#include "WeaponChargeEventNotify.h"

FWeaponChargeEventNotify::FWeaponChargeEventNotify() {
    this->Threshold = 0.00f;
    this->Comparision = EWeaponChargeComparisonOperatorType::LessThan;
    this->EVENTTYPE = EWeaponChargeEventType::BlueprintEvent;
}

