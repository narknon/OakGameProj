#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxLeagueChallengeCell.generated.h"

class UGFxLeaguesMenu;
class UOakChallenge;
class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxLeagueChallengeCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxTextField* ChallengeNameField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ProgressBar;
    
    UPROPERTY(Transient)
    UGbxTextField* CurretProgressField;
    
    UPROPERTY(Transient)
    UGFxLeaguesMenu* OwningLeagueMenu;
    
    UPROPERTY(Transient)
    UOakChallenge* ChallengeCDO;
    
    UGFxLeagueChallengeCell();
};

