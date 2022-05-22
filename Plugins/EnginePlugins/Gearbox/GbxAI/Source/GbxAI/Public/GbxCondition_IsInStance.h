#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsInStance.generated.h"

class UStanceType;

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXAI_API UGbxCondition_IsInStance : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UStanceType* StanceToMatch;
    
    UPROPERTY(EditAnywhere)
    float OptionalSpeedThreshold;
    
public:
    UGbxCondition_IsInStance();
};

