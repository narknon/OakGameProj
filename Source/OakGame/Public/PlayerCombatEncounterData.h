#pragma once
#include "CoreMinimal.h"
#include "PlayerCombatEncounterData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCombatEncounterData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 Experience;
    
    UPROPERTY()
    int32 CriticalHits;
    
    UPROPERTY()
    int32 Kills;
    
    UPROPERTY()
    int32 BadassKills;
    
    UPROPERTY()
    int32 RaidBossKills;
    
public:
    OAKGAME_API FPlayerCombatEncounterData();
};

