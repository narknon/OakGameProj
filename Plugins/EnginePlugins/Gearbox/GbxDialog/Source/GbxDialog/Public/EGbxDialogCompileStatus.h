#pragma once
#include "CoreMinimal.h"
#include "EGbxDialogCompileStatus.generated.h"

UENUM(BlueprintType)
enum class EGbxDialogCompileStatus : uint8 {
    UpToDate,
    Dirty,
    Error,
};

