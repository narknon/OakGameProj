#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendListBase.h"
#include "EFloatComparisonType.h"
#include "GbxAnimNode_BlendListByFloatComparison.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_BlendListByFloatComparison : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValueA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValueB;
    
    UPROPERTY(EditAnywhere)
    EFloatComparisonType Comparison;
    
    FGbxAnimNode_BlendListByFloatComparison();
};

