#pragma once
#include "CoreMinimal.h"
#include "EOakLeague.h"
#include "GbxCondition.h"
#include "OakCondition_League.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UOakCondition_League : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOakLeague> League;
    
public:
    UOakCondition_League();
};

