#pragma once
#include "CoreMinimal.h"
#include "EGbxDialogCompileStatus.generated.h"

UENUM(BlueprintType)
enum class EGbxDialogCompileStatus :  {
    UpToDate,
    Dirty,
    Error,
};

