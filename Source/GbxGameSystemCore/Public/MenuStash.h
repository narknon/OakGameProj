#pragma once
#include "CoreMinimal.h"
#include "MenuStash.generated.h"

class UBaseMenuStackMenuInfo;

USTRUCT(BlueprintType)
struct FMenuStash {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UBaseMenuStackMenuInfo*> StashedMenus;
    
    GBXGAMESYSTEMCORE_API FMenuStash();
};

