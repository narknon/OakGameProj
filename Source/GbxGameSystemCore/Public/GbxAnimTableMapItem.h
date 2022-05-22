#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTableMapItem.generated.h"

USTRUCT(BlueprintType)
struct FGbxAnimTableMapItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanUse;
    
    UPROPERTY()
    uint64 LastFrame;
    
    GBXGAMESYSTEMCORE_API FGbxAnimTableMapItem();
};

