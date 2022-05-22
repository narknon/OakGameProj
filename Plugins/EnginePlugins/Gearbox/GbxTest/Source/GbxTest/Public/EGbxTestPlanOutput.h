#pragma once
#include "CoreMinimal.h"
#include "EGbxTestPlanOutput.generated.h"

UENUM(BlueprintType)
enum class EGbxTestPlanOutput :  {
    FullName,
    Console,
    Commandline,
};

