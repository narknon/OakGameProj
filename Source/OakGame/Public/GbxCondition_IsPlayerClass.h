#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsPlayerClass.generated.h"

class UPlayerClassIdentifier;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsPlayerClass : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* PlayerClass;
    
public:
    UGbxCondition_IsPlayerClass();
};

