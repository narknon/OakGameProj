#include "LookAtPointTag.h"

ULookAtPointTag::ULookAtPointTag() {
    this->LookAtPointType = ELookAtPointType::Persist;
    this->FacingStyle = EFacingChannel::Aim;
    this->SearchHeight = 1000.00f;
    this->SearchRadius = 1000.00f;
    this->UseCondition = NULL;
    this->bGetInCloser = false;
    this->UseRadius = 100.00f;
    this->bMaxUsers = false;
    this->MaxUsers = 1;
}

