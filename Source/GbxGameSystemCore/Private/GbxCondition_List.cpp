#include "GbxCondition_List.h"

bool UGbxCondition_List::RequiresNativeClass() const {
    return false;
}

UClass* UGbxCondition_List::GetRequiredInterface() const {
    return NULL;
}

UGbxCondition_List::UGbxCondition_List() {
    this->Operator = ECompoundConditionOperatorType::And;
    this->Conditions.AddDefaulted(2);
}

