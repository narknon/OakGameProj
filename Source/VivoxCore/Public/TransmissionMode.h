#pragma once
#include "CoreMinimal.h"
#include "TransmissionMode.generated.h"

UENUM(BlueprintType)
enum class TransmissionMode :  {
    None,
    Single,
    All,
};

