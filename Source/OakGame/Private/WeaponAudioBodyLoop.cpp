#include "WeaponAudioBodyLoop.h"

FWeaponAudioBodyLoop::FWeaponAudioBodyLoop() {
    this->StartLoopEvent = NULL;
    this->StopLoopEvent = NULL;
    this->LoopType = EWeaponAudioBodyLoopType::PlayerOnly;
    this->ComponentSize = 0.00f;
}

