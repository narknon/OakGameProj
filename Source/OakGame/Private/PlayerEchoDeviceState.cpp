#include "PlayerEchoDeviceState.h"

FPlayerEchoDeviceState::FPlayerEchoDeviceState() {
    this->EchoDeviceBlueprint = NULL;
    this->OverrideScreenDataTable = NULL;
    this->OffsetInterpSpeed = 0.00f;
    this->RotationInterpSpeed = 0.00f;
    this->DepthOffset = 0.00f;
    this->EchoDevice = NULL;
    this->bIsAttached = false;
}

