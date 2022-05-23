#pragma once
#include "CoreMinimal.h"
#include "EOakElementalStackBucketType.generated.h"

UENUM(BlueprintType)
enum class EOakElementalStackBucketType : uint8 {
    Unknown,
    Character,
    Weapon,
    Grenade,
    InteractiveObject,
    ElementalInteraction,
};

