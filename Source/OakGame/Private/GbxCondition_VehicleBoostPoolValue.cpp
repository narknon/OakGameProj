#include "GbxCondition_VehicleBoostPoolValue.h"

UGbxCondition_VehicleBoostPoolValue::UGbxCondition_VehicleBoostPoolValue() {
    this->ComparisonMode = EBoostPoolValueComparisonMode::Equal;
    this->BoostPoolValue = 0.00f;
    this->bValueIsPercentage = false;
}

