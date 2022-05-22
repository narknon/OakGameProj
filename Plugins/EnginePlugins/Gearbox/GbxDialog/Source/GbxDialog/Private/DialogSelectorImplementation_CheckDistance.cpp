#include "DialogSelectorImplementation_CheckDistance.h"

UDialogSelectorImplementation_CheckDistance::UDialogSelectorImplementation_CheckDistance() {
    this->FromActorParam = NULL;
    this->ToActorParam = NULL;
    this->bUseCustomDistance = false;
    this->CustomDistance = 2000.00f;
    this->bTrueIfCloser = true;
}

