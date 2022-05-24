#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxVaultCardRewardCell.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxVaultCardRewardCell : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* UnlockAnimClip;
    
public:
    UGFxVaultCardRewardCell();
};

