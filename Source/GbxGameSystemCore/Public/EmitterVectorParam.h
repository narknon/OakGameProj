#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmitterVectorParam.generated.h"

USTRUCT(BlueprintType)
struct FEmitterVectorParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FVector Value;
    
    GBXGAMESYSTEMCORE_API FEmitterVectorParam();
};

