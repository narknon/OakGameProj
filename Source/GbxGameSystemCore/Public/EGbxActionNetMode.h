#pragma once
#include "CoreMinimal.h"
#include "EGbxActionNetMode.generated.h"

UENUM(BlueprintType)
enum class EGbxActionNetMode : uint8 {
    ServerAuth,
    AlwaysRep,
    LocalOnly,
    SkipNetOwner,
};

