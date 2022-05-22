#pragma once
#include "CoreMinimal.h"
#include "EEffectivePlayerCountSetting.h"
#include "EffectivePlayerCountData.generated.h"

USTRUCT(BlueprintType)
struct FEffectivePlayerCountData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 EffectiveNumPlayers;
    
    UPROPERTY()
    EEffectivePlayerCountSetting Setting;
    
    OAKGAME_API FEffectivePlayerCountData();
};

