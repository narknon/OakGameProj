#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxEchoNetMatchmakingInfoPanelWidget.generated.h"

class UGFxEchoNetMatchmakingStartButton;
class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxEchoNetMatchmakingInfoPanelWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGbxTextField* MatchmakingModeNameClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModeSelectionClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NormalModeButtonClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* HeroicModeButtonClip;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuGlyphClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBarClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ObjectiveDescriptionClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ObjectiveDescriptionMaskClip;
    
    UPROPERTY(Transient)
    UGFxEchoNetMatchmakingStartButton* ButtonStartClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MatchmakingModeLockedClip;
    
    UPROPERTY(Transient)
    TArray<UGbxTextField*> RequirementsClips;
    
    UPROPERTY(Transient)
    int32 DisplayedActivityIndex;
    
    UPROPERTY(Transient)
    bool bIsShowing;
    
public:
    UGFxEchoNetMatchmakingInfoPanelWidget();
protected:
    UFUNCTION()
    void OnHeroicModeButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

