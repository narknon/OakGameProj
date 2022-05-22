#include "OakCondition_MayhemMode.h"

UOakCondition_MayhemMode::UOakCondition_MayhemMode() {
    this->Type = EOakMayhemModeConditionType::IsMayhemModeActive;
    this->Operator = EConditionComparisonOperatorType::EqualTo;
}

