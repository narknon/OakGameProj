#pragma once
#include "CoreMinimal.h"
#include "EJoystickScheme.generated.h"

UENUM(BlueprintType)
enum class EJoystickScheme : uint8 {
    Classic,
    SouthPaw,
    OldSchool,
    OldSchool_Southpaw,
    Count,
};

