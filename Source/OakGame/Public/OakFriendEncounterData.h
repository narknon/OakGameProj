#pragma once
#include "CoreMinimal.h"
#include "OakFriendEncounterData.generated.h"

USTRUCT(BlueprintType)
struct FOakFriendEncounterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 NumEncounters;
    
    UPROPERTY()
    int64 TimeLastEncounter;
    
    OAKGAME_API FOakFriendEncounterData();
};

