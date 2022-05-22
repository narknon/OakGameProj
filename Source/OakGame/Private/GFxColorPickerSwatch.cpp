#include "GFxColorPickerSwatch.h"

UGFxColorPickerSwatch::UGFxColorPickerSwatch() {
    this->bIsSplit = false;
    this->ColorSquare = NULL;
    this->ColorSquareSplit = NULL;
    this->bIsPickingForThis = false;
    this->AssignedColorListIndex = -1;
    this->AssignedSplitColorListIndex = -1;
}

