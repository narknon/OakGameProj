#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_A9K_AssignFFYLTarget.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_A9K_AssignFFYLTarget : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bIncludeGivingUp;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeResurrecting;
    
public:
    UGbxCondition_A9K_AssignFFYLTarget();
};

