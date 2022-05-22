#include "GbxNavAnimTable.h"

UGbxNavAnimTable::UGbxNavAnimTable() {
    this->Type = EGbxNavAnimTableType::Start;
    this->MinStopDistance = 100.00f;
    this->MaxInterpDistance = 100.00f;
    this->AutoFillAngle = 0.00f;
}

