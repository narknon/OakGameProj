#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_VehicleDriverLeaves.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleDriverLeaves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInverted;
    
    OAKGAME_API FAIAspectSettings_VehicleDriverLeaves();
};

