#pragma once
#include "CoreMinimal.h"
#include "EStandInActorType.generated.h"

UENUM(BlueprintType)
enum class EStandInActorType : uint8 {
    None,
    Player,
    PlayerSkillScreen,
    WeaponSkin,
    WeaponTrinket,
    CrewQuartersDecoration,
    CustomActor,
};

