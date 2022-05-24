#pragma once
#include "CoreMinimal.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxPlayerStorageBag.generated.h"

USTRUCT(BlueprintType)
struct FGFxPlayerStorageBag {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FOakUIInventoryItemDisplayInfo> Items;
    
    OAKGAME_API FGFxPlayerStorageBag();
};

