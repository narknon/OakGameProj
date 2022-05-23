#pragma once
#include "CoreMinimal.h"
#include "EEchoLogDisplayCategory.generated.h"

UENUM(BlueprintType)
enum class EEchoLogDisplayCategory : uint8 {
    EchoLog,
    EridianLog,
    TyphonLog,
};

