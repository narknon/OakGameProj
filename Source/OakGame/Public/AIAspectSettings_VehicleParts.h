#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_VehicleParts.generated.h"

class UVehiclePartData;

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UVehiclePartData>> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInverted;
    
    OAKGAME_API FAIAspectSettings_VehicleParts();
};

