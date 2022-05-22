#pragma once
#include "CoreMinimal.h"
#include "GFxCSSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSRewardScreenMenu.generated.h"

class UGbxGFxGridScrollingList;
class UCSLevelData;
class UGFxCSProgressBar;
class UGbxTextField;
class UGbxGFxObject;
class UGFxCSRewardScreenItem;
class UGbxGFxButton;

UCLASS()
class OAKCS_API UGFxCSRewardScreenMenu : public UGFxCSSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float ProgressBarAnimSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBetweenBonuses;
    
    UPROPERTY(EditDefaultsOnly)
    float TextAnimationTime;
    
    UPROPERTY(EditDefaultsOnly)
    FText BaseRewardText;
    
    UPROPERTY(EditDefaultsOnly)
    FText ExtraPointText;
    
    UPROPERTY(EditDefaultsOnly)
    FText HighScoreMatchedText;
    
    UPROPERTY(EditDefaultsOnly)
    FText HighScoreBeatText;
    
    UPROPERTY(EditDefaultsOnly)
    FText PioneerText;
    
    UPROPERTY(EditDefaultsOnly)
    UCSLevelData* LevelData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> PlayerCSBucksAmountText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PuzzleCompletedTextPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MainContentPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ProgressTextPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NumCompletedPuzzleTextPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* NumCompletedPuzzleText;
    
    UPROPERTY(Transient)
    UGbxTextField* NumTargetPuzzleText;
    
    UPROPERTY(Transient)
    UGFxCSProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewCustomizationAnimText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AnimRewardPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CharacterPicture;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CustomizationPicture;
    
    UPROPERTY(Transient)
    UGFxCSRewardScreenItem* PuzzleRewardItem;
    
    UPROPERTY(Transient)
    UGFxCSRewardScreenItem* TotalPuzzleRewardItem;
    
    UPROPERTY(Transient)
    TArray<UGFxCSRewardScreenItem*> BonusItems;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ButtonList;
    
public:
    UGFxCSRewardScreenMenu();
private:
    UFUNCTION()
    void OnPlayNextCharacterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlayAgainClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMainMenuButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void GoToPuzzleMenu() const;
    
    UFUNCTION()
    void GoToMainMenu() const;
    
    UFUNCTION()
    void extRefreshNumCompletedPuzzle() const;
    
    UFUNCTION()
    void extPuzzleCompletedTextAnimDone() const;
    
    UFUNCTION()
    void extOnShowPuzzleRewardDone() const;
    
    UFUNCTION()
    void extOnShowBonusDone() const;
    
    UFUNCTION()
    void extNumCompletedPuzzleAnimDone() const;
    
};

