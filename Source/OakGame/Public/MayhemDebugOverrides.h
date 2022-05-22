#pragma once
#include "CoreMinimal.h"
#include "MayhemDebugOverrides.generated.h"

USTRUCT(BlueprintType)
struct FMayhemDebugOverrides {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> ModifierIndexOverrides;
    
    OAKGAME_API FMayhemDebugOverrides();
};

