#pragma once
#include "CoreMinimal.h"
#include "OakInteractiveSessionStats.generated.h"

USTRUCT(BlueprintType)
struct FOakInteractiveSessionStats {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SessionLifetimeInSeconds;
    
    UPROPERTY()
    int64 DamageCaused;
    
    UPROPERTY()
    int32 NbEnemiesKilled;
    
    UPROPERTY()
    int32 NbTimeInjured;
    
    UPROPERTY()
    int32 NbTimeDead;
    
    UPROPERTY()
    int32 NbLegendaries;
    
    OAKGAME_API FOakInteractiveSessionStats();
};

