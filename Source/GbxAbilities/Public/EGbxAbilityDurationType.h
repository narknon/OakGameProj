#pragma once
#include "CoreMinimal.h"
#include "EGbxAbilityDurationType.generated.h"

UENUM(BlueprintType)
enum class EGbxAbilityDurationType : uint8 {
    Timed,
    Indefinite,
    Infinite,
};

