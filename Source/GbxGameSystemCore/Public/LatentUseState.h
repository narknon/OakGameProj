#pragma once
#include "CoreMinimal.h"
#include "LatentUseState.generated.h"

class UUsableComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FLatentUseState {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UUsableComponent* UsableComponent;
    
    FLatentUseState();
};

