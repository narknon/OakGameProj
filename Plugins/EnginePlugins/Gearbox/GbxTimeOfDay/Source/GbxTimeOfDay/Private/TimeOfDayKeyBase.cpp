#include "TimeOfDayKeyBase.h"

UTimeOfDayKeyBase::UTimeOfDayKeyBase() {
    this->ParentLayer = NULL;
    this->KeyTime = 0.00f;
    this->bEnabled = true;
    this->KeyType = ETimeOfDayKeyType::None;
}

