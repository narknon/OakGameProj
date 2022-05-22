#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogTimeSlotReference.generated.h"

class UDialogScriptData;
class UDialogTimeSlotData;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogTimeSlotReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UDialogScriptData> Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid Guid;
    
private:
    UPROPERTY(SkipSerialization, Transient)
    UDialogTimeSlotData* CachedTimeSlot;
    
public:
    FDialogTimeSlotReference();
};

