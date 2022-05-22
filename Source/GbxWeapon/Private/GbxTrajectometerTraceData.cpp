#include "GbxTrajectometerTraceData.h"

FGbxTrajectometerTraceData::FGbxTrajectometerTraceData() {
    this->Channel = ECC_WorldStatic;
    this->Shape = EGbxTrajectoryTraceShape::Line;
    this->ExtentX = 0.00f;
    this->ExtentY = 0.00f;
    this->ExtentZ = 0.00f;
}

