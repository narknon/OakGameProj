#include "MissionEnableConditionObjectiveCount.h"

UMissionEnableConditionObjectiveCount::UMissionEnableConditionObjectiveCount() {
    this->ComparisonOperator = EObjectiveCountComparisonOperatorType::EqualTo;
    this->ObjectiveProgress = 0;
    this->bRequireActiveObjective = true;
}

