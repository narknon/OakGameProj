#pragma once
#include "CoreMinimal.h"
#include "PlayerDueling_SavedInfo.h"
#include "PlayerActiveDuelState.generated.h"

class AOakCharacter_Player;
class UTeam;

USTRUCT(BlueprintType)
struct FPlayerActiveDuelState {
    GENERATED_BODY()
public:
    UPROPERTY()
    AOakCharacter_Player* PlayerCharacter;
    
    UPROPERTY()
    bool bIsMainPlayer;
    
    UPROPERTY()
    UTeam* DuelTeam;
    
    UPROPERTY()
    FPlayerDueling_SavedInfo SavedInfo;
    
    OAKGAME_API FPlayerActiveDuelState();
};

