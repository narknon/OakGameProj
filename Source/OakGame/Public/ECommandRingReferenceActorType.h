#pragma once
#include "CoreMinimal.h"
#include "ECommandRingReferenceActorType.generated.h"

UENUM(BlueprintType)
enum class ECommandRingReferenceActorType : uint8 {
    Target,
    Owner,
    Custom,
};

