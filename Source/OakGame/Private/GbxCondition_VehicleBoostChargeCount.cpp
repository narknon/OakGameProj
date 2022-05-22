#include "GbxCondition_VehicleBoostChargeCount.h"

UGbxCondition_VehicleBoostChargeCount::UGbxCondition_VehicleBoostChargeCount() {
    this->ComparisonMode = EBoostChargeCountComparisonMode::Equal;
    this->NeededChargeCount = 0;
}

