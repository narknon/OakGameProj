#pragma once
#include "CoreMinimal.h"
#include "DialogBlackboardCounterValueMap.generated.h"

class UDialogEnumValue;

USTRUCT(BlueprintType)
struct FDialogBlackboardCounterValueMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<UDialogEnumValue*, float> Map;
    
    GBXDIALOG_API FDialogBlackboardCounterValueMap();
};

