#pragma once
#include "CoreMinimal.h"
#include "ECharacterProfileUpdateStep.generated.h"

UENUM(BlueprintType)
enum class ECharacterProfileUpdateStep :  {
    Step_MainCharacterInfo,
    Step_MainCharacterInfo2,
    Step_Inventory,
    Step_MAX UMETA(Hidden),
};

