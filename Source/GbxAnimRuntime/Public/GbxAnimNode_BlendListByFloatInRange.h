#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendListBase.h"
#include "FloatMinMaxRange.h"
#include "GbxAnimNode_BlendListByFloatInRange.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_BlendListByFloatInRange : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FFloatMinMaxRange> MinMaxRanges;
    
    UPROPERTY(Transient)
    int32 CurrentRangeIndex;
    
    FGbxAnimNode_BlendListByFloatInRange();
};

