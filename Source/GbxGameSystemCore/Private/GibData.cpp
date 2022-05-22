#include "GibData.h"

FGibData::FGibData() {
    this->MaxCount = 0;
    this->SelectionWeight = 0.00f;
    this->bOverrideGlobalScale = false;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->Mesh = NULL;
    this->MaterialOverride = NULL;
}

