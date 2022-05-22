#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxNewGameListButton.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxNewGameListButton : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* CharacterClassClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterLevelNumClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterLevelLabelClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DlcLabelClip;
    
public:
    UGFxNewGameListButton();
};

