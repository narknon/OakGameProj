#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuStatCardStatInfo.generated.h"

class UOakCARVehiclePartStat;

USTRUCT()
struct FOakCARMenuStatCardStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UOakCARVehiclePartStat* Stat;
    
    UPROPERTY(Transient)
    float AggregatedValue;
    
    OAKGAME_API FOakCARMenuStatCardStatInfo();
};

