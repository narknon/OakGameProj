#pragma once
#include "CoreMinimal.h"
#include "OnDialogSequenceFinishedDelegate.h"
#include "DialogSequenceNotifyDelegate.h"
#include "DialogSequenceDelegates.generated.h"

USTRUCT(BlueprintType)
struct FDialogSequenceDelegates {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnDialogSequenceFinished OnFinished;
    
    UPROPERTY()
    TMap<FName, FDialogSequenceNotifyDelegate> Notifies;
    
    GBXDIALOG_API FDialogSequenceDelegates();
};

