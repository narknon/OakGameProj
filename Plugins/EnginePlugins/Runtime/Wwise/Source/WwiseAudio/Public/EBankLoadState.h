#pragma once
#include "CoreMinimal.h"
#include "EBankLoadState.generated.h"

UENUM(BlueprintType)
enum class EBankLoadState : uint8 {
    Unloaded,
    AsyncLoading,
    Loaded,
};

