#include "GbxAnimNode_LookAt.h"

FGbxAnimNode_LookAt::FGbxAnimNode_LookAt() {
    this->ParentLookAxis = EGbxLookAxisOption::X;
    this->HeadLookPercentage = 0.00f;
    this->bEnableDebug = false;
    this->bUseEyeMovement = false;
    this->EyeFocusTimeMin = 0.00f;
    this->EyeFocusTimeMax = 0.00f;
    this->EyeGlanceTimeMin = 0.00f;
    this->EyeGlanceTimeMax = 0.00f;
    this->EyeShiftTimeMin = 0.00f;
    this->EyeShiftTimeMax = 0.00f;
    this->EyeLODThreshold = 0;
    this->bUseEyeScreenSizeThreshold = false;
}

