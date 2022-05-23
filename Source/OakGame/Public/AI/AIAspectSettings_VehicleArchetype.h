#pragma once
#include "CoreMinimal.h"
#include "EVehicleAchetypeNative.h"
#include "AIAspectSettings_VehicleArchetype.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVehicleAchetypeNative> VehicleArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInverted;
    
    OAKGAME_API FAIAspectSettings_VehicleArchetype();
};

