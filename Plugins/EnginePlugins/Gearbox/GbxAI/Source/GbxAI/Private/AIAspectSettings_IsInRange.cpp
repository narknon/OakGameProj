#include "AIAspectSettings_IsInRange.h"

FAIAspectSettings_IsInRange::FAIAspectSettings_IsInRange() {
    this->DistanceTest = EIsInRangeAspectDistanceTest::Direct;
    this->bUseAdvancedRanges = false;
}

