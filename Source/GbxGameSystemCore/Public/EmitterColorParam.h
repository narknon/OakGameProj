#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmitterColorParam.generated.h"

USTRUCT(BlueprintType)
struct FEmitterColorParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FColor Value;
    
    GBXGAMESYSTEMCORE_API FEmitterColorParam();
};

