#pragma once
#include "CoreMinimal.h"
#include "FilteredImpactData.h"
#include "VehicleImpactEffectData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleImpactEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FFilteredImpactData> FilteredImpactData;
    
    OAKGAME_API FVehicleImpactEffectData();
};

