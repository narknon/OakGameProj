#pragma once
#include "CoreMinimal.h"
#include "EAIActionCreationMethod.generated.h"

UENUM(BlueprintType)
enum class EAIActionCreationMethod : uint8 {
    Unknown,
    Composition,
    PropertyPanel,
    Graph,
};

