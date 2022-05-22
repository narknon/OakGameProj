#pragma once
#include "CoreMinimal.h"
#include "PlayerDuelArenaState.generated.h"

class AOakCharacter_Player;

USTRUCT(BlueprintType)
struct FPlayerDuelArenaState {
    GENERATED_BODY()
public:
    UPROPERTY()
    AOakCharacter_Player* Player;
    
    OAKGAME_API FPlayerDuelArenaState();
};

