#pragma once
#include "CoreMinimal.h"
#include "ZoneMapMissionPOIBlacklistEntry.generated.h"

class AOakCharacter;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FZoneMapMissionPOIBlacklistEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftClassPtr<AOakCharacter> BlacklistedCharacter;
    
    UPROPERTY(VisibleAnywhere)
    FString BlacklistedCharacterPath;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxCondition* MissionBlacklistCondition;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlacklistMissionGiving;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxCondition* ObjectiveBlacklistCondition;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlacklistObjectiveWaypoint;
    
    OAKGAME_API FZoneMapMissionPOIBlacklistEntry();
};

