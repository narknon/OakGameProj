#pragma once
#include "CoreMinimal.h"
#include "EDistributedSoundDebugVisualizationMode.generated.h"

UENUM(BlueprintType)
enum class EDistributedSoundDebugVisualizationMode :  {
    Off,
    ActiveLocations,
    Tree,
    LeafNodes,
};

