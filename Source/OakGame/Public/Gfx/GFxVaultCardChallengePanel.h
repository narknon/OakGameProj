#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVaultCardChallengePanel.generated.h"

class UGbxGFxGridScrollingList;

UCLASS(NonTransient)
class OAKGAME_API UGFxVaultCardChallengePanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ChallengeListClip;
    
public:
    UGFxVaultCardChallengePanel();
};

