#pragma once
#include "CoreMinimal.h"
#include "EForwardDynamicsActivation.generated.h"

UENUM(BlueprintType)
enum class EForwardDynamicsActivation : uint8 {
    PhysicsAssetSimulated,
    ForwardDynamicsProfileDefinition,
};

