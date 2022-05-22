#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchmakerSettings.generated.h"

UCLASS(Config=Game)
class UMatchmakerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float RetryDelaySeconds;
    
    UPROPERTY(Config)
    float RetryJitterSeconds;
    
    UPROPERTY(Config)
    float SearchThresholdSeconds;
    
    UPROPERTY(Config)
    float MatchmakingRoundDuration;
    
    UPROPERTY(Config)
    float BackfillMatchmakingRoundDuration;
    
    UPROPERTY(Config)
    float HostTravelDelaySeconds;
    
    UPROPERTY(Config)
    float InitialAdvertiseChance;
    
    UPROPERTY(Config)
    float ConfirmPlayersCountdownSeconds;
    
    UPROPERTY(Config)
    float ConfirmPlayersQuickStartCountdownSeconds;
    
    UMatchmakerSettings();
};

