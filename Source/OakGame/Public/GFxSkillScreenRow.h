#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxSkillScreenRow.generated.h"

class UGFxSkillScreenItem;
class UOakPlayerAbilityTreeTierData;

UCLASS(NonTransient)
class OAKGAME_API UGFxSkillScreenRow : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxSkillScreenItem* DisplayedSkillSlots[5];
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeTierData* TierData;
    
public:
    UGFxSkillScreenRow();
};

