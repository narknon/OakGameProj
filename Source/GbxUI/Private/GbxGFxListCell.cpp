#include "GbxGFxListCell.h"

UGbxGFxListCell::UGbxGFxListCell() {
    this->OwningList = NULL;
    this->CellBounds = NULL;
    this->ListIndex = -1;
    this->TopOffsetPosition = 0.00f;
    this->BottomOffsetPosition = 0.00f;
    this->LeftOffsetPosition = 0.00f;
    this->RightOffsetPosition = 0.00f;
    this->bIsReadjustingFocus = false;
}

