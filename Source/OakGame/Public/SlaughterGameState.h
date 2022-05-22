#pragma once
#include "CoreMinimal.h"
#include "OakGameState.h"
#include "SlaughterGameState.generated.h"

class AOakPlayerState;
class UHUDNotificationAsset;

UCLASS()
class OAKGAME_API ASlaughterGameState : public AOakGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlaughterWaveCountdown, int32, CountdownRemaining);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlaughterRoundComplete, int32, RoundNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlaughterPlayerDied, AOakPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSlaughterNotAllPlayersAssembled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSlaughterNewWave, bool, bBossWave, int32, CountdownDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlaughterNewRound, int32, RoundNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSlaughterAllPlayersDied);
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* SlaughterRoundStartNotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* SlaughterNewRoundWaveNotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* SlaughterRoundCompletedNotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* SlaughterFailedNotificationData;
    
    UPROPERTY(EditAnywhere)
    TArray<UHUDNotificationAsset*> SlaughterCountdownNotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* SlaughterNotAllPlayersAssembledNotificationData;
    
    UPROPERTY(EditAnywhere)
    int32 NewRoundNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText NewRoundNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 NewWaveNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText NewWaveNotificationText;
    
    UPROPERTY(EditAnywhere)
    FText BossWaveNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 RoundCompleteNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText RoundCompleteNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 PlayerDiedNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText PlayerDiedNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 TeamWipeNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText TeamWipeNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 NotAllPlayersAssembledNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText NotAllPlayersAssembledNotificationText;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterPlayerDied OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterAllPlayersDied OnAllPlayersDied;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterNewRound OnNewRound;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterNewWave OnNewWave;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterRoundComplete OnRoundComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterWaveCountdown OnWaveCountdown;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlaughterNotAllPlayersAssembled OnNotAllPlayersAssembled;
    
protected:
    UPROPERTY(Transient)
    int32 WaveCountdown;
    
public:
    ASlaughterGameState();
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastRoundComplete(int32 RoundNumber);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastPlayerDied(AOakPlayerState* PlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastNotAllPlayersAssembled();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastNewWave(bool bBossWave, int32 CountdownDuration);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastNewRound(int32 RoundNumber);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastAllPlayersDied();
    
};

