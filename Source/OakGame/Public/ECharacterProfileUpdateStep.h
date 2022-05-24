#pragma once
#include "CoreMinimal.h"
#include "ECharacterProfileUpdateStep.generated.h"

UENUM(BlueprintType)
enum class ECharacterProfileUpdateStep : uint8 {
    Step_MainCharacterInfo,
    Step_MainCharacterInfo2,
    Step_Inventory,
    Step_MAX UMETA(Hidden),
};

