#pragma once
#include "CoreMinimal.h"
#include "PlayerActiveDuelState.h"
#include "TeamActiveDuelState.generated.h"

class UTeam;

USTRUCT(BlueprintType)
struct FTeamActiveDuelState {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTeam* DuelTeam;
    
    UPROPERTY()
    TArray<FPlayerActiveDuelState> Players;
    
    OAKGAME_API FTeamActiveDuelState();
};

