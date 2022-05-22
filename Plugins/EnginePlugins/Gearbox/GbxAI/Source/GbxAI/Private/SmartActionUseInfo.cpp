#include "SmartActionUseInfo.h"

FSmartActionUseInfo::FSmartActionUseInfo() {
    this->bInterrupting = false;
    this->UseDuration = 0.00f;
    this->CooldownTime = 0.00f;
    this->bPassiveAction = false;
    this->bCombatAction = false;
}

