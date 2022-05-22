#pragma once
#include "CoreMinimal.h"
#include "VehicleAudioLoopData.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FVehicleAudioLoopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* LoopStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* LoopEnd;
    
    OAKGAME_API FVehicleAudioLoopData();
};

