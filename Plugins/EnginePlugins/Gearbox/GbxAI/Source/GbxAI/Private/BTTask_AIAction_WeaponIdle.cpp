#include "BTTask_AIAction_WeaponIdle.h"
#include "AIAction_WeaponIdle.h"

UBTTask_AIAction_WeaponIdle::UBTTask_AIAction_WeaponIdle() {
    this->Action = CreateDefaultSubobject<UAIAction_WeaponIdle>(TEXT("AIAction_WeaponIdle"));
}

