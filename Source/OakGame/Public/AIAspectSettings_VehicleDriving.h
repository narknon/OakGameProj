#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_VehicleDriving.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleDriving {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam DisableTurnHandBrake;
    
    OAKGAME_API FAIAspectSettings_VehicleDriving();
};

