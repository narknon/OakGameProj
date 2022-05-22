#include "CachedUIStatData.h"

FCachedUIStatData::FCachedUIStatData() {
    this->Stat = NULL;
    this->ComparisonValue = 0.00f;
    this->ComparisonResult = EUIStatComparisonResult::None;
}

