#pragma once
#include "CoreMinimal.h"
#include "EMultiplayerLootMode.generated.h"

UENUM(BlueprintType)
enum class EMultiplayerLootMode : uint8 {
    Standard,
    Instanced,
};

