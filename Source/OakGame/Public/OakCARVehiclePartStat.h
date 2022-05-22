#pragma once
#include "CoreMinimal.h"
#include "UIStatData.h"
#include "OakCARVehiclePartStat.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UOakCARVehiclePartStat : public UUIStatData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 StatListDisplayPriority;
    
    UOakCARVehiclePartStat();
};

