#pragma once
#include "CoreMinimal.h"
#include "EFaceFXTargetPlatform.generated.h"

UENUM(BlueprintType)
namespace EFaceFXTargetPlatform {
    enum Type {
        PC,
        PS4,
        XBoxOne,
        GGP,
        MAX,
    };
}

