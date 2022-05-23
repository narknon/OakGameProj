#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsPassiveAbilityGradeMet.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_IsPassiveAbilityGradeMet : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MinGradeRequired;
    
public:
    UGbxCondition_IsPassiveAbilityGradeMet();
};

