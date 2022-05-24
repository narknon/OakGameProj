#pragma once
#include "CoreMinimal.h"
#include "GFxCSPuzzleMenuDelegate.h"
#include "GFxCSSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSPuzzleMenu.generated.h"

class UGFxCSPuzzle;
class UGbxGFxDialogBox;
class UCSPuzzleFeedbackManager;
class UCSPuzzleIntroManager;
class UGbxGFxObject;
class UGbxTextField;
class UGFxCSProgressBar;
class UGbxGFxButton;

UCLASS()
class OAKCS_API UGFxCSPuzzleMenu : public UGFxCSSubMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGFxCSPuzzleMenu OnQuit;
    
private:
    UPROPERTY(Transient)
    UGbxGFxDialogBox* RequestingPuzzleDialog;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UCSPuzzleFeedbackManager* PuzzleFeedbackManager;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UCSPuzzleIntroManager* PuzzleIntroManager;
    
    UPROPERTY(Transient)
    UGFxCSPuzzle* Puzzle;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ParScoreContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* ParScoreText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CurrentScoreContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* CurrentScoreText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HighScoreContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* HighScoreText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DebugContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugCurrentScoreText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugRealCurrentScoreText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugParScoreText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugRealParScoreText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugHighestScoreText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugRealHighestScoreText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugNbTokenLeftText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugMatchingTileValueText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugPerfectAlignmentModifierText;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugPuzzleId;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugTokenPos;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ParScoreTextFeedback;
    
    UPROPERTY(Transient)
    UGFxCSProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ProgressBarBonusScoreContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressBarBonusScoreText;
    
    UPROPERTY(Transient)
    UGbxGFxButton* QuitButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* QuickPassButton;
    
    UPROPERTY(Transient)
    UGbxTextField* QuickPassButtonTxt;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SubmitButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SubmitButtonContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ProgressBarContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NotificationContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* NotificationText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BonusScoreContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* BonusScoreText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NumTokensPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NumTokensContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* NumTokensText;
    
    UPROPERTY(Transient)
    UGbxTextField* NumTotalTokensText;
    
public:
    UGFxCSPuzzleMenu();
private:
    UFUNCTION()
    void OnSubmitClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitConfirmed(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuickPassClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnErrorDialogClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnConfirmQuickPass(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void GoToRewardScreenMenu() const;
    
    UFUNCTION()
    void GoToMainMenu() const;
    
    UFUNCTION()
    void extTokenTileTurnedOn() const;
    
    UFUNCTION()
    void extTokenTileTurnedOff() const;
    
};

