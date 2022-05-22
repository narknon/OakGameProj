#pragma once
#include "CoreMinimal.h"
#include "EGbxMovementMode.generated.h"

UENUM(BlueprintType)
enum class EGbxMovementMode :  {
    GBXMOVE_Ladder,
    GBXMOVE_Mantle,
    GBXMOVE_PawnAttached,
    GBXMOVE_PretendWalk,
    GBXMOVE_NoneWithRootMotion,
    GBXMOVE_MAX UMETA(Hidden),
};

