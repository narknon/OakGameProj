#include "GbxCondition_Compound.h"

UGbxCondition_Compound::UGbxCondition_Compound() {
    this->Condition1 = NULL;
    this->Operator = ECompoundConditionOperatorType::And;
    this->Condition2 = NULL;
}

