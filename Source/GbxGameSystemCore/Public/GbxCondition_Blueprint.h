#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_Blueprint.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_Blueprint : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_Blueprint();
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool EvaluateCondition(UObject* Context, UObject* OptionalContext) const;
    
};

