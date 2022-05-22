#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionMappedEventData.h"
#include "GbxInputActionMap.generated.h"

class UGbxInputActionData;

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputActionMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGbxInputActionData* InputActionData;
    
    UPROPERTY()
    TArray<FGbxInputActionMappedEventData> Events;
    
public:
    FGbxInputActionMap();
};

