#pragma once
#include "CoreMinimal.h"
#include "TeamActiveDuelState.h"
#include "DuelLoserState.h"
#include "EDuelClassification.h"
#include "ActiveDuelState.generated.h"

class ADuelArena;
class ADuelTotem;
class AOakCharacter_Player;
class UTeam;
class APlayerTradeManager;

USTRUCT(BlueprintType)
struct FActiveDuelState {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTeamActiveDuelState> ParticipatingTeams;
    
    UPROPERTY()
    ADuelArena* DuelArena;
    
    UPROPERTY()
    ADuelTotem* DuelTotem;
    
    UPROPERTY()
    AOakCharacter_Player* DuelInstigator;
    
    UPROPERTY()
    UTeam* WinningTeam;
    
    UPROPERTY()
    TArray<FDuelLoserState> DuelLosers;
    
    UPROPERTY()
    APlayerTradeManager* TradeManager;
    
    UPROPERTY()
    int32 ActiveIndex;
    
    UPROPERTY()
    EDuelClassification Classification;
    
    OAKGAME_API FActiveDuelState();
};

