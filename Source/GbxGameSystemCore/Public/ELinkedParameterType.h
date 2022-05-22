#pragma once
#include "CoreMinimal.h"
#include "ELinkedParameterType.generated.h"

UENUM(BlueprintType)
enum class ELinkedParameterType : uint8 {
    Scalar,
    Vector,
    Texture,
};

