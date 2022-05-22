#pragma once
#include "CoreMinimal.h"
#include "EGbxActionPriority.generated.h"

UENUM(BlueprintType)
enum class EGbxActionPriority : uint8 {
    Low,
    Normal,
    High,
    Important,
};

