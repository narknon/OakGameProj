#pragma once
#include "CoreMinimal.h"
#include "EDamageComponentHealthMode.generated.h"

UENUM()
enum class EDamageComponentHealthMode : int32 {
    ResourcePools,
    SimpleHealth,
};

