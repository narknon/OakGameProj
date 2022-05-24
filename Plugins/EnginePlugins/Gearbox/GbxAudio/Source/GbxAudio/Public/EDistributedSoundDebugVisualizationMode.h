#pragma once
#include "CoreMinimal.h"
#include "EDistributedSoundDebugVisualizationMode.generated.h"

UENUM(BlueprintType)
enum class EDistributedSoundDebugVisualizationMode : uint8 {
    Off,
    ActiveLocations,
    Tree,
    LeafNodes,
};

