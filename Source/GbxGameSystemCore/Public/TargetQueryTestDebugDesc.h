#pragma once
#include "CoreMinimal.h"
#include "TargetQueryTestDebugDesc.generated.h"

USTRUCT()
struct FTargetQueryTestDebugDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float Score;
    
    GBXGAMESYSTEMCORE_API FTargetQueryTestDebugDesc();
};

