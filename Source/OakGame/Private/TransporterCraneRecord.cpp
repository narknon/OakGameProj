#include "TransporterCraneRecord.h"

FTransporterCraneRecord::FTransporterCraneRecord() {
    this->CraneState = Deactivated;
    this->MoveSpeed = 0.00f;
    this->MoveStartPosition = 0.00f;
    this->MoveStartTime = 0.00f;
}

