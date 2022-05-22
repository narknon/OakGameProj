#pragma once
#include "CoreMinimal.h"
#include "OakGameMode.h"
#include "SlaughterGameMode.generated.h"

class ASlaughterGameState;

UCLASS(NonTransient)
class OAKGAME_API ASlaughterGameMode : public AOakGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASlaughterGameState* SlaughterGameState;
    
public:
    ASlaughterGameMode();
    UFUNCTION(BlueprintCallable)
    void BroadcastRoundComplete(int32 RoundNumber);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastNotAllPlayersAssembled();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastNewWave(bool bBossWave, int32 CountdownDuration);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastNewRound(int32 RoundNumber);
    
};

