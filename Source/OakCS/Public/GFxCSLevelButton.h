#pragma once
#include "CoreMinimal.h"
#include "GFxCSButton.h"
#include "GFxCSLevelButton.generated.h"

class UGbxTextField;
class UGbxGFxObject;
class UGFxCSProgressBar;

UCLASS(NonTransient)
class OAKCS_API UGFxCSLevelButton : public UGFxCSButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* NumLevel;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterName;
    
    UPROPERTY(Transient)
    UGbxTextField* LevelDifficulty;
    
    UPROPERTY(Transient)
    UGbxTextField* PuzzleCompletedNum;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CharacterPicture;
    
    UPROPERTY(Transient)
    UGFxCSProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* RewardText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardPicture;
    
public:
    UGFxCSLevelButton();
};

