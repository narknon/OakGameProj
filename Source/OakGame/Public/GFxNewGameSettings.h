#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxNewGameSettings.generated.h"

class UGbxGFxButton;
class UGbxMenuData;
class UGbxGFxNewGameSettingsButton;
class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxHintWidget;
class UGbxGFxGridScrollingList;
class AMenuMapMenuFlow;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxNewGameSettings : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> MainMenuMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    FName StartGameAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FName StoryDifficultyAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FName NormalDifficultyAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FText EasierDifficultyText;
    
    UPROPERTY(EditDefaultsOnly)
    FText NormalDifficultyText;
    
    UPROPERTY(EditDefaultsOnly)
    FText RightPanelDifficultyTitleText;
    
    UPROPERTY(EditDefaultsOnly)
    FText RightPanelLootModeTitleText;
    
    UPROPERTY(EditDefaultsOnly)
    FText RightPanelDifficultyText;
    
    UPROPERTY(EditDefaultsOnly)
    FText RightPanelLootModeText;
    
    UPROPERTY(EditAnywhere)
    FText RightPanelSelectDlcTitleText;
    
    UPROPERTY(EditAnywhere)
    FText RightPanelSelectDlcBodyText;
    
    UPROPERTY(EditAnywhere)
    FText RightPanelSelectCharacterTitleText;
    
    UPROPERTY(EditAnywhere)
    FText RightPanelSelectCharacterBodyText;
    
    UPROPERTY(EditAnywhere)
    FText StartFromNewGameText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* OptionPannel;
    
    UPROPERTY(Transient)
    UGbxTextField* CategoryText;
    
    UPROPERTY(Transient)
    UGbxGFxNewGameSettingsButton* OptionButton1;
    
    UPROPERTY(Transient)
    UGbxGFxNewGameSettingsButton* OptionButton2;
    
    UPROPERTY(Transient)
    UGbxTextField* TipsLabel;
    
    UPROPERTY(Transient)
    UGbxGFxButton* StartButton;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* StartButtonHint;
    
    UPROPERTY(Transient)
    UGbxTextField* TooltipTitle;
    
    UPROPERTY(Transient)
    UGbxTextField* ToolTipText;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ChoiceListClip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AMenuMapMenuFlow> MenuMapMenuFlowActor;
    
public:
    UGFxNewGameSettings();
private:
    UFUNCTION()
    void OnStartButtonClicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOption2Focused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOption2Clicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOption1Focused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOption1Clicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChoiceListItemSelected(UGbxGFxListCell* Item) const;
    
    UFUNCTION()
    void OnChoiceListItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void extUpdateLayout() const;
    
    UFUNCTION()
    void extOnUITransitionCompleted() const;
    
    UFUNCTION()
    void extOnStartGame() const;
    
    UFUNCTION()
    void extOnMenuHid() const;
    
    UFUNCTION()
    void extClearTipsLabel() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

