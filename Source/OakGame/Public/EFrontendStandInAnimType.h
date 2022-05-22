#pragma once
#include "CoreMinimal.h"
#include "EFrontendStandInAnimType.generated.h"

UENUM(BlueprintType)
enum class EFrontendStandInAnimType : uint8 {
    Default,
    CharacterSelect,
    CharacterCreate,
    RnRCharaterCreate,
};

