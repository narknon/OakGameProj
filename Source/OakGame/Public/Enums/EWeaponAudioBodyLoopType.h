#pragma once
#include "CoreMinimal.h"
#include "EWeaponAudioBodyLoopType.generated.h"

UENUM(BlueprintType)
enum class EWeaponAudioBodyLoopType : int32 {
    PlayerOnly,
    BothPlayersAndNPCs,
    NPCOnly,
};

