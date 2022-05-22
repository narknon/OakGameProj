#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuStatLineData.generated.h"

class UOakCARVehiclePartStat;

USTRUCT()
struct OAKGAME_API FOakCARMenuStatLineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UOakCARVehiclePartStat* PartStat;
    
    FOakCARMenuStatLineData();
};

