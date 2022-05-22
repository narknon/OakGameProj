#pragma once
#include "CoreMinimal.h"
#include "ERequestVerb.generated.h"

UENUM(BlueprintType)
enum class ERequestVerb : uint8 {
    GET,
    POST,
    PUT,
    DEL,
    CUSTOM,
};

