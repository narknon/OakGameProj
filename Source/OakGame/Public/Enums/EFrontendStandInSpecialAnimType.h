#pragma once
#include "CoreMinimal.h"
#include "EFrontendStandInSpecialAnimType.generated.h"

UENUM(BlueprintType)
enum class EFrontendStandInSpecialAnimType :  {
    PlayerArrival,
    PrimaryPlayerFlourish,
    CharacterSelectSelection,
    CharacterSelectSelection_NoActionSkill,
    CharacterCreationSelection,
    MAX,
};

