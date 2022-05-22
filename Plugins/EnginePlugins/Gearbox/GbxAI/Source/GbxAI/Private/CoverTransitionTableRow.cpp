#include "CoverTransitionTableRow.h"

FCoverTransitionTableRow::FCoverTransitionTableRow() {
    this->Height = 0.00f;
    this->FaceDirection = ECoverFaceDirection::Toward;
    this->SlotHeight = ECoverSlotHeight::Low;
    this->bCornerTransition = false;
    this->Stance = NULL;
    this->bAutoFill = false;
}

