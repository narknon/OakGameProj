#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "Condition_ShouldPlaySpecialEchoCartridgeInsert.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class UCondition_ShouldPlaySpecialEchoCartridgeInsert : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float PercentageChanceAfterFirstTime;
    
public:
    UCondition_ShouldPlaySpecialEchoCartridgeInsert();
};

