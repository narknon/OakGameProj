#include "GbxCondition.h"
#include "Templates/SubclassOf.h"

class UGbxCondition;
class UObject;

bool UGbxCondition::K2_EvaluateConditionType(TSubclassOf<UGbxCondition> Condition, UObject* Context) {
    return false;
}

bool UGbxCondition::K2_EvaluateCondition(const UGbxCondition* Condition, UObject* Context) {
    return false;
}

UGbxCondition::UGbxCondition() {
    this->bInvertCondition = false;
    this->RefreshRate = EConditionRefreshRate::FourTimesPerSecond;
}

