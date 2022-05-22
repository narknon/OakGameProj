#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DialogSpeakerInterface.generated.h"

class UDialogPerformanceData;

UINTERFACE(Blueprintable)
class GBXDIALOG_API UDialogSpeakerInterface : public UInterface {
    GENERATED_BODY()
};

class GBXDIALOG_API IDialogSpeakerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanPerformThisDialog(UDialogPerformanceData* Performance) const;
    
};

