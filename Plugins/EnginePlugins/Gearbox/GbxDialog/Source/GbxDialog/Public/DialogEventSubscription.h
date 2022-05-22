#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogEventSubscription.generated.h"

USTRUCT()
struct FDialogEventSubscription {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath ReferencerTimeSlot;
    
    GBXDIALOG_API FDialogEventSubscription();
};

