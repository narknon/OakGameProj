#include "StandInUIConfigData.h"

FStandInUIConfigData::FStandInUIConfigData() {
    this->bPositionRelativeToEchoDeviceProjectionSocket = false;
    this->bLockStandInPositionOnFadeOut = false;
    this->bMayAlterRotationDamping = false;
    this->RotationDamping = 0.00f;
    this->LocationDamping = 0.00f;
}

