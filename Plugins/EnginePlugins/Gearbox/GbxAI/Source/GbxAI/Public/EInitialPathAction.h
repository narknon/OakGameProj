#pragma once
#include "CoreMinimal.h"
#include "EInitialPathAction.generated.h"

UENUM(BlueprintType)
enum class EInitialPathAction : uint8 {
    None,
    PatrolPath,
    ScriptedPath,
    ScriptedRoute,
    ScriptedWait,
};

