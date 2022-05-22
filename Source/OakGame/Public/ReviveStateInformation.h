#pragma once
#include "CoreMinimal.h"
#include "EReviveState.h"
#include "ReviveStateInformation.generated.h"

USTRUCT(BlueprintType)
struct FReviveStateInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EReviveState ReviveState;
    
    UPROPERTY(BlueprintReadOnly)
    bool ReviveSuccessful;
    
    OAKGAME_API FReviveStateInformation();
};

