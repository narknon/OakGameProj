#pragma once
#include "CoreMinimal.h"
#include "GbxDialogDataAsset.h"
#include "DialogEvent.generated.h"

class UDialogParameter;

UCLASS()
class GBXDIALOG_API UDialogEvent : public UGbxDialogDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDialogParameter*> Parameters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> PerformanceNotifyNames;
    
    UDialogEvent();
};

