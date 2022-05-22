#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuStatValue.generated.h"

class UOakCARVehiclePartStat;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCARMenuStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UOakCARVehiclePartStat* StatData;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    FOakCARMenuStatValue();
};

