#pragma once
#include "CoreMinimal.h"
#include "EBankLoadState.generated.h"

UENUM(BlueprintType)
enum class EBankLoadState :  {
    Unloaded,
    AsyncLoading,
    Loaded,
};

