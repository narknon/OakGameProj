#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuInputMode.generated.h"

UENUM(BlueprintType)
enum class EGbxMenuInputMode : uint8 {
    None,
    OwnerPlayer,
    OwnerPlayer_DontConsumeInput,
    AnyLocalPlayer,
    AnyController,
    Inherit,
};

