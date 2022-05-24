#pragma once
#include "CoreMinimal.h"
#include "EFrontendStandInSpecialAnimType.generated.h"

UENUM(BlueprintType)
enum class EFrontendStandInSpecialAnimType : uint8 {
    PlayerArrival,
    PrimaryPlayerFlourish,
    CharacterSelectSelection,
    CharacterSelectSelection_NoActionSkill,
    CharacterCreationSelection,
    MAX,
};

