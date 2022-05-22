#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcher.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSHUD.generated.h"

class UGFxEchologWidgetBase;
class UGFxCSButton;
class UCSGlobals;
class UGFxCSSubtitles;
class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxButton;

UCLASS()
class OAKCS_API UGFxCSHUD : public UGbxGFxMenuSwitcher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCSGlobals* CitizenScienceGlobals;
    
    UPROPERTY(Transient)
    UGFxEchologWidgetBase* EchoWidget;
    
    UPROPERTY(Transient)
    UGFxCSSubtitles* SubtitlesWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* CSBucksAmountTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuTitle;
    
    UPROPERTY(Transient)
    UGFxCSButton* BackButton;
    
    UPROPERTY(Transient)
    UGFxCSButton* HelpButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CSBucksObject;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlayerIdPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* PlayerIdText;
    
public:
    UGFxCSHUD();
private:
    UFUNCTION()
    void OnHelpClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnCSBucksAmountChanged(int32 NewAmount) const;
    
    UFUNCTION()
    void OnBackClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

