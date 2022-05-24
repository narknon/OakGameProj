#pragma once
#include "CoreMinimal.h"
#include "EGbxTestPlanOutput.generated.h"

UENUM(BlueprintType)
enum class EGbxTestPlanOutput : uint8 {
    FullName,
    Console,
    Commandline,
};

