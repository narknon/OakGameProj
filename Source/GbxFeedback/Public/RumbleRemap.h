#pragma once
#include "CoreMinimal.h"
#include "RumbleSlotMapping.h"
#include "RumbleRemap.generated.h"

USTRUCT(BlueprintType)
struct FRumbleRemap {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FRumbleSlotMapping LeftSmallScalar;
    
    UPROPERTY(Config, EditAnywhere)
    FRumbleSlotMapping LeftLargeScalar;
    
    UPROPERTY(Config, EditAnywhere)
    FRumbleSlotMapping RightSmallScalar;
    
    UPROPERTY(Config, EditAnywhere)
    FRumbleSlotMapping RightLargeScalar;
    
    GBXFEEDBACK_API FRumbleRemap();
};

