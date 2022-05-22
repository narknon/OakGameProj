#pragma once
#include "CoreMinimal.h"
#include "NavAnimServerData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FNavAnimServerData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Areas;
    
    UPROPERTY()
    UObject* UserEdges;
    
    FNavAnimServerData();
};

