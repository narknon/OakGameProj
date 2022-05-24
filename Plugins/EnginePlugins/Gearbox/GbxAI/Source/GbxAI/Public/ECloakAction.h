#pragma once
#include "CoreMinimal.h"
#include "ECloakAction.generated.h"

UENUM(BlueprintType)
enum class ECloakAction : uint8 {
    OnStart,
    OnStop,
};

