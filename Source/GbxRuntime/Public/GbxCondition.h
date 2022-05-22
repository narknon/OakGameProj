#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EConditionRefreshRate.h"
#include "GbxCondition.generated.h"

class UGbxCondition;

UCLASS(Abstract, BlueprintType, CollapseCategories, EditInlineNew)
class GBXRUNTIME_API UGbxCondition : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bInvertCondition;
    
    UPROPERTY(EditAnywhere)
    EConditionRefreshRate RefreshRate;
    
public:
    UGbxCondition();
    UFUNCTION(BlueprintCallable)
    static bool K2_EvaluateConditionType(TSubclassOf<UGbxCondition> Condition, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_EvaluateCondition(const UGbxCondition* Condition, UObject* Context);
    
};

