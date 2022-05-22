#include "GoreSizeSelectionData.h"

FGoreSizeSelectionData::FGoreSizeSelectionData() {
    this->bSpecifiedMinScale = false;
    this->bSpecifiedMaxScale = false;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->StumpSound = NULL;
    this->StumpMaterialOverride = NULL;
    this->LimbMaterialOverride = NULL;
    this->bScaleLimbToStump = false;
    this->LimbScale = 0.00f;
}

