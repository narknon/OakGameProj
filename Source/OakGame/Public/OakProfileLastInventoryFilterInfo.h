#pragma once
#include "CoreMinimal.h"
#include "OakProfileLastInventoryFilterInfo.generated.h"

USTRUCT(BlueprintType)
struct FOakProfileLastInventoryFilterInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SlotTypeId;
    
    UPROPERTY()
    int32 LastFilterIndex;
    
    OAKGAME_API FOakProfileLastInventoryFilterInfo();
};

