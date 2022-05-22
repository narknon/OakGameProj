#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMap.h"
#include "GbxInputActionEventLookupList.generated.h"

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionEventLookupList {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGbxInputActionMap> InputActionMaps;
    
public:
    FGbxInputActionEventLookupList();
};

