#pragma once
#include "CoreMinimal.h"
#include "MantleAttemptInfo.h"
#include "MantleActiveActionData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMantleActiveActionData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FMantleAttemptInfo MantleAttempt;
    
    FMantleActiveActionData();
};

