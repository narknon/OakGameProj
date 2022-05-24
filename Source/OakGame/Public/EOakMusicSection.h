#pragma once
#include "CoreMinimal.h"
#include "EOakMusicSection.generated.h"

UENUM(BlueprintType)
enum class EOakMusicSection : uint8 {
    Section_None,
    Section_0,
    Section_1,
    Section_2,
    Section_3,
    Section_4,
    Section_5,
    Section_6,
    Section_7,
    Section_8,
    Section_9,
    Section_MAX UMETA(Hidden),
};

