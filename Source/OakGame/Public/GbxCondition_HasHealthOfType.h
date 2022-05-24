#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_HasHealthOfType.generated.h"

class UHealthTypeData;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_HasHealthOfType : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<UHealthTypeData*> HealthTypes;
    
public:
    UGbxCondition_HasHealthOfType();
};

