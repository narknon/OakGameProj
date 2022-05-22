#include "CoverStyleData.h"

UCoverStyleData::UCoverStyleData() {
    this->AnimType = ECoverStyleAnimType::TimedMoveOut;
    this->View = NULL;
    this->bAllowLookAts = true;
    this->bAllowAimOffsets = true;
    this->bForceFiring = false;
}

