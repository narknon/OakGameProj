#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxInventoryFeedbackWidget.generated.h"

UCLASS(NonTransient)
class UGFxInventoryFeedbackWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* AnimUnlockedClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AnimDroppedClip;
    
public:
    UGFxInventoryFeedbackWidget();
};

