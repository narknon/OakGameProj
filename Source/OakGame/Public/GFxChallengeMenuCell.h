#pragma once
#include "CoreMinimal.h"
#include "OakUIChallengeListData.h"
#include "GbxGFxListCell.h"
#include "GFxChallengeMenuCell.generated.h"

class UGbxGFxObject;
class UGbxGFxProgressBar;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxChallengeMenuCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FOakUIChallengeListData ChallengeListData;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* CompletedCheck;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressText;
    
    UPROPERTY(Transient)
    UGbxTextField* RankText;
    
public:
    UGFxChallengeMenuCell();
};

