#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendListBase.h"
#include "IntMinMaxRange.h"
#include "GbxAnimNode_BlendListByIntInRange.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_BlendListByIntInRange : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FIntMinMaxRange> MinMaxRanges;
    
    UPROPERTY(Transient)
    int32 CurrentRangeIndex;
    
    FGbxAnimNode_BlendListByIntInRange();
};

