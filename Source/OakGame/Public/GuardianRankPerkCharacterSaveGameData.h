#pragma once
#include "CoreMinimal.h"
#include "GuardianRankPerkCharacterSaveGameData.generated.h"

class UGuardianRankPerkData;

USTRUCT(BlueprintType)
struct FGuardianRankPerkCharacterSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnabled;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UGuardianRankPerkData> PerkDataPath;
    
public:
    OAKGAME_API FGuardianRankPerkCharacterSaveGameData();
};

