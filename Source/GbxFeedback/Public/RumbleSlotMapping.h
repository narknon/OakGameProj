#pragma once
#include "CoreMinimal.h"
#include "ERumbleSlot.h"
#include "Curves/CurveFloat.h"
#include "RumbleSlotMapping.generated.h"

USTRUCT(BlueprintType)
struct FRumbleSlotMapping {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ERumbleSlot MapSlotTo;
    
    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve MappingScalar;
    
    GBXFEEDBACK_API FRumbleSlotMapping();
};

