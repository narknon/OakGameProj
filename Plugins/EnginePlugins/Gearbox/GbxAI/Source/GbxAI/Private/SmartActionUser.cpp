#include "SmartActionUser.h"

FSmartActionUser::FSmartActionUser() {
    this->Controller = NULL;
    this->UseDuration = 0.00f;
    this->State = ESmartObjectTaskState::Uninitialized;
}

