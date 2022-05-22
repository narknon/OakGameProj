#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingSearchParameterOp.h"
#include "MatchmakingSearchParameter.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingSearchParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParamName;
    
    UPROPERTY()
    FName TargetParamName;
    
    UPROPERTY()
    TEnumAsByte<EMatchmakingSearchParameterOp::Type> Op;
    
    UPROPERTY()
    int32 ValueRange;
    
    OAKGAME_API FMatchmakingSearchParameter();
};

