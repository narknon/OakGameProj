#include "CameraModesManager.h"

UCameraModesManager::UCameraModesManager() {
    this->bIsClient = false;
    this->bIsRemote = false;
    this->bRemoteIsFirstPerson = true;
    this->CurrentMode = NULL;
    this->Inputs = NULL;
    this->State = NULL;
}

