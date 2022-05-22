#pragma once
#include "CoreMinimal.h"
#include "EOcclusionVoxelThinningAlgorithm.generated.h"

UENUM(BlueprintType)
enum class EOcclusionVoxelThinningAlgorithm : uint8 {
    Skeletal,
    MedialPlane,
};

