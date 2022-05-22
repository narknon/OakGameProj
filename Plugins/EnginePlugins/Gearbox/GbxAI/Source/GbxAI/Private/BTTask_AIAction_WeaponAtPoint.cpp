#include "BTTask_AIAction_WeaponAtPoint.h"
#include "AIAction_WeaponAtPoint.h"

UBTTask_AIAction_WeaponAtPoint::UBTTask_AIAction_WeaponAtPoint() {
    this->Action = CreateDefaultSubobject<UAIAction_WeaponAtPoint>(TEXT("AIAction_WeaponAtPoint"));
}

