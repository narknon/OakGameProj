#pragma once
#include "CoreMinimal.h"
#include "EDuelLoseReason.h"
#include "DuelLoserState.generated.h"

class AOakCharacter_Player;

USTRUCT(BlueprintType)
struct FDuelLoserState {
    GENERATED_BODY()
public:
    UPROPERTY()
    AOakCharacter_Player* Player;
    
    UPROPERTY()
    EDuelLoseReason LoseReason;
    
    OAKGAME_API FDuelLoserState();
};

