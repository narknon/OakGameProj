#pragma once
#include "CoreMinimal.h"
#include "EGbxCustomEventContext.generated.h"

UENUM(BlueprintType)
enum class EGbxCustomEventContext : uint8 {
    Owner,
    Instigator,
};

