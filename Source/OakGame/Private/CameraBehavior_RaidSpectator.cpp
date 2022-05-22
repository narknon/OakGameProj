#include "CameraBehavior_RaidSpectator.h"

UCameraBehavior_RaidSpectator::UCameraBehavior_RaidSpectator() {
    this->HorizontalOffset = 200.00f;
    this->VerticalOffset = 100.00f;
    this->MaxRotateSpeed = 180.00f;
    this->MaxZoom = 2.00f;
    this->MaxZoomSpeed = 1.00f;
    this->CameraPitchMin = -30.00f;
    this->CameraPitchMax = 30.00f;
}

