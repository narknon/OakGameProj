#pragma once
#include "CoreMinimal.h"
#include "CachedInterp.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCachedInterp {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Tag;
    
    UPROPERTY()
    FString Interp;
    
    FCachedInterp();
};

