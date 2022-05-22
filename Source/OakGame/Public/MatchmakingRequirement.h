#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingRequirementComparisonOp.h"
#include "EMatchmakingRequirementType.h"
#include "MatchmakingRequirement.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingRequirement {
    GENERATED_BODY()
public:
    UPROPERTY()
    EMatchmakingRequirementType Type;
    
    UPROPERTY()
    EMatchmakingRequirementComparisonOp ComparisonOp;
    
    UPROPERTY()
    int32 Value;
    
    UPROPERTY()
    FString DescriptionKey;
    
    OAKGAME_API FMatchmakingRequirement();
};

