#pragma once
#include "CoreMinimal.h"
#include "DialogBlackboardFlagValue.h"
#include "DialogBlackboardFlagValueMap.generated.h"

class UDialogEnumValue;

USTRUCT()
struct FDialogBlackboardFlagValueMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<UDialogEnumValue*, FDialogBlackboardFlagValue> Map;
    
    GBXDIALOG_API FDialogBlackboardFlagValueMap();
};

