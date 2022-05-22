#pragma once
#include "CoreMinimal.h"
#include "VehicleAudioLoopData.h"
#include "WwisePlaybackInstance.h"
#include "VehicleAudioLoopOnNamedCompData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleAudioLoopOnNamedCompData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVehicleAudioLoopData AudioLoopData;
    
    UPROPERTY(EditAnywhere)
    FName AudioComponentTag;
    
    UPROPERTY(Transient)
    TArray<FWwisePlaybackInstance> PlaybackInstances;
    
public:
    OAKGAME_API FVehicleAudioLoopOnNamedCompData();
};

