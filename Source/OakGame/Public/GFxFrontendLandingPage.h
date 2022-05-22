#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EGbxFocusableWidgetState.h"
#include "EGFxFrontendLandingPageType.h"
#include "GbxMenuInputEvent.h"
#include "GFxFrontendLandingPage.generated.h"

class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxFrontendLandingPage : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* InfoBoxClip;
    
    UPROPERTY(Transient)
    UGbxTextField* TitleTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DescriptionTextGridAreaClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* DescriptionTextScrollBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* LandingButtonClip;
    
    UPROPERTY(Transient)
    UGbxTextField* TransitionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* KeyArtClip;
    
    UPROPERTY(Transient)
    bool bIsEnbaled;
    
public:
    UPROPERTY(Transient)
    EGFxFrontendLandingPageType CurrentPageType;
    
    UGFxFrontendLandingPage();
private:
    UFUNCTION()
    void OnGoOnlineClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    FString GetFrameForGoOnlineButton(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState ButtonState);
    
};

