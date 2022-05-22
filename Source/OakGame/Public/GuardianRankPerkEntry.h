#pragma once
#include "CoreMinimal.h"
#include "GuardianRankPerkEntry.generated.h"

class UGuardianRankPerkData;
class UGbxAbility;

USTRUCT(BlueprintType)
struct FGuardianRankPerkEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGuardianRankPerkData* RankPerk;
    
    UPROPERTY()
    UGbxAbility* PerkAbilityInstance;
    
    UPROPERTY()
    bool bUnlocked;
    
    UPROPERTY()
    bool bWasJustUnlocked;
    
    OAKGAME_API FGuardianRankPerkEntry();
};

