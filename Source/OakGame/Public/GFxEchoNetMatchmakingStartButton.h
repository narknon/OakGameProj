#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxEchoNetMatchmakingStartButton.generated.h"

class UGbxGFxObject;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class UGFxEchoNetMatchmakingStartButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    float BaseButtonWidth;
    
    UPROPERTY(Transient)
    float BaseContentWrapperX;
    
    UPROPERTY(Transient)
    float BaseContentWrapperY;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContentWrapperClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ButtonHintClip;
    
    UPROPERTY(Transient)
    bool bMatchmakingButtonEnabled;
    
    UPROPERTY(Transient)
    bool bMatchmakingButtonIsPressToHold;
    
public:
    UGFxEchoNetMatchmakingStartButton();
};

