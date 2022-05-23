#pragma once
#include "CoreMinimal.h"
#include "EPlayerStandInType.generated.h"

UENUM(BlueprintType)
enum class EPlayerStandInType : uint8 {
    Unspecified,
    FrontendLobby,
    CharacterSelect,
    CharacterCreate,
    SkillScreen,
    RnRCharacterSelect,
};

