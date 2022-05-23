#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxEchoNetMatchmakingModeSelectionWidget.generated.h"

class UGbxGFxGridScrollingList;
class UGbxGFxButton;
class UGbxGFxListCell;

UCLASS(NonTransient)
class UGFxEchoNetMatchmakingModeSelectionWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ScrollVelocity;
    
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentListClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* ButtonLeftClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* ButtonRightClip;
    
    UPROPERTY(Transient)
    bool bIsShowing;
    
public:
    UGFxEchoNetMatchmakingModeSelectionWidget();
protected:
    UFUNCTION()
    void OnArrowButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnActivityItemFocused(UGbxGFxListCell* ListItem);
    
};

