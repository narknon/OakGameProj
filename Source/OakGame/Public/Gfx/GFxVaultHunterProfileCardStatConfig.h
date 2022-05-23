#pragma once
#include "CoreMinimal.h"
#include "StatConfigInfo.h"
#include "GFxVaultHunterProfileCardStatConfig.generated.h"

USTRUCT()
struct FGFxVaultHunterProfileCardStatConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FStatConfigInfo> StatsInfo;
    
    UPROPERTY(Transient)
    uint32 TimePlayedHours;
    
    UPROPERTY(Transient)
    uint32 TimePlayedMinutes;
    
    OAKGAME_API FGFxVaultHunterProfileCardStatConfig();
};

