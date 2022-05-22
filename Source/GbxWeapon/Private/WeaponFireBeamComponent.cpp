#include "WeaponFireBeamComponent.h"
#include "Templates/SubclassOf.h"

class ULightBeamData;

TSubclassOf<ULightBeamData> UWeaponFireBeamComponent::GetShotLightBeamData_Implementation() const {
    return NULL;
}

UWeaponFireBeamComponent::UWeaponFireBeamComponent() {
    this->DamageRateScale = 1.00f;
    this->LightBeamData = NULL;
    this->bFollowPlayerCrosshair = true;
    this->LockOnContactTime = 0.00f;
    this->LockOnBreakRadius = 0.00f;
    this->LockOnBreakAngle = 0.00f;
    this->DamageRampCurve = NULL;
}

