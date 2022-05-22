#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxQuickMenu.generated.h"

class UGbxGFxButton;
class UGFxEmoteWheelButton;
class UGbxTextField;
class AOakPlayerState;

UCLASS()
class UGFxQuickMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString GFxKEY_ButtonPattern;
    
    UPROPERTY(EditAnywhere)
    FString GFxNAME_RollOverLabel;
    
    UPROPERTY(EditAnywhere)
    float OutroTime;
    
    UPROPERTY(EditAnywhere)
    float RadialTolerance;
    
    UPROPERTY()
    TArray<UGFxEmoteWheelButton*> WheelButtons;
    
    UPROPERTY(Transient)
    UGbxTextField* RolloverLabel;
    
    UPROPERTY(Transient)
    AOakPlayerState* CurrentTargetOtherPlayer;
    
    UPROPERTY(Transient)
    UGFxEmoteWheelButton* CurrentFocusedButton;
    
public:
    UGFxQuickMenu();
private:
    UFUNCTION()
    void WheelButtonUnfocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void WheelButtonPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void WheelButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void extWheelDisplayed() const;
    
};

