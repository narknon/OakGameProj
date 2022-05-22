#pragma once
#include "CoreMinimal.h"
#include "MantleTraceInputs.h"
#include "MantleTraceCheck.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMantleTraceCheck {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FMantleTraceInputs Inputs;
    
    FMantleTraceCheck();
};

