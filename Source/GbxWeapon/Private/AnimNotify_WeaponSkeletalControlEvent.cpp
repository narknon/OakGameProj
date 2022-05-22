#include "AnimNotify_WeaponSkeletalControlEvent.h"

UAnimNotify_WeaponSkeletalControlEvent::UAnimNotify_WeaponSkeletalControlEvent() {
    this->ControlType = EWET_Default;
    this->ControlEvent = EWeaponSkeletalControlEvent::Pause;
    this->ControlInput = 0.00f;
}

