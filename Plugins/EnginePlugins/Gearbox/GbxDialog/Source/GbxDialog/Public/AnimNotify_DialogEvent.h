#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DialogParameterValue.h"
#include "AnimNotify_DialogEvent.generated.h"

class UDialogEvent;
class UDialogParameter;

UCLASS(CollapseCategories)
class GBXDIALOG_API UAnimNotify_DialogEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogEvent* DialogEvent;
    
    UPROPERTY(EditAnywhere)
    TMap<UDialogParameter*, FDialogParameterValue> ParameterValues;
    
    UAnimNotify_DialogEvent();
};

