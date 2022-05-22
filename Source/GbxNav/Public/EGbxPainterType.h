#pragma once
#include "CoreMinimal.h"
#include "EGbxPainterType.generated.h"

UENUM(BlueprintType)
enum class EGbxPainterType : uint8 {
    Static,
    Dynamic,
    StaticAndDynamic,
};

