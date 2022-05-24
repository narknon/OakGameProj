#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GbxHintWidget.h"
#include "GbxHintInfo.h"
#include "EHoldToPressGlyphType.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxHintWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;
class UGbxHintBar;
class AGbxPlayerController;
class UGbxGFxProgressBar;
class UGbxGFxButton;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxHintWidget : public UGbxGFxListCell, public IGbxHintWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxHintBar> HintBarOwnerBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> HintBarOwnerPC;
    
    UPROPERTY(Transient)
    FGbxHintInfo HintBarHintInfo;
    
    UPROPERTY(Transient)
    UGbxTextField* HintText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HoldToPressBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* HoldToPressGamepad;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* HoldToPressKeyboard;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* HoldToPressKeyboardWide;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* HoldToPressKeyboardXWide;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HintCaret;
    
    UPROPERTY(Transient)
    bool bHasInitialHintTextWidth;
    
    UPROPERTY(Transient)
    float InitialHintTextWidth;
    
    UPROPERTY(Transient)
    EHoldToPressGlyphType HoldToPressType;
    
    UPROPERTY(Transient)
    float ManualPressToHoldProgress;
    
    UPROPERTY(Transient)
    bool bHasBroadcastPressToHoldEvent;
    
    UPROPERTY(Transient)
    bool bIsHintVisible;
    
    UPROPERTY(Transient)
    bool bIsAvailable;
    
    UPROPERTY(Transient)
    bool bInputNeedsResetBeforeShowingProgress;
    
    UPROPERTY(Transient)
    float ExternalHintHeldProgress;
    
public:
    UGbxGFxHintWidget();
protected:
    UFUNCTION()
    void OnThisHintClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    
    // Fix for true pure virtual functions not being implemented
};

