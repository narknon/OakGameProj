#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsMaybeFallingOffACliff.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsMaybeFallingOffACliff : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float TraceDistance;
    
    UPROPERTY(EditAnywhere)
    float TraceRadius;
    
public:
    UGbxCondition_IsMaybeFallingOffACliff();
};

