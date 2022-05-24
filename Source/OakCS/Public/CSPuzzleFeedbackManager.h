#pragma once
#include "CoreMinimal.h"
#include "CSPuzzleFeedbackSettings.h"
#include "UObject/Object.h"
#include "CSPuzzleFeedbackManager.generated.h"

class UGFxCSPuzzle;
class UGFxCSTokenPool;
class UCSPuzzleSession;
class UGFxCSProgressBar;
class UGbxGFxObject;
class UGbxTextField;
class UGFxCSPuzzleMenu;
class UGFxCSPuzzleTile;

UCLASS(DefaultToInstanced, EditInlineNew)
class OAKCS_API UCSPuzzleFeedbackManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FCSPuzzleFeedbackSettings Settings;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxCSPuzzle> Puzzle;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxCSTokenPool> TokenPool;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxCSProgressBar> ProgressBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> ProgressBarContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UCSPuzzleSession> PuzzleSession;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> ParScoreTextFeedback;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> ParScoreContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> ParScoreText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> CurrentScoreContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> CurrentScoreText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> HighScoreContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> HighScoreText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> ProgressBarBonusScoreContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> ProgressBarBonusScoreText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> BonusScoreContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> BonusScoreText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> NumTokensContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxTextField> NumTokensText;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxCSPuzzleMenu> OwningMenu;
    
    UPROPERTY(Transient)
    TArray<UGFxCSPuzzleTile*> TweeningTiles;
    
public:
    UCSPuzzleFeedbackManager();
};

