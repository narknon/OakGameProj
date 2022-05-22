#include "OakCARVehicleUIInfo.h"

FOakCARVehicleUIInfo::FOakCARVehicleUIInfo() {
    this->bIsLoading = false;
    this->bIsEmpty = false;
    this->bIsLocked = false;
    this->OnEquipSound = NULL;
    this->OverridePreviewLookAtTransform = false;
    this->BlendPostProcess = false;
}

