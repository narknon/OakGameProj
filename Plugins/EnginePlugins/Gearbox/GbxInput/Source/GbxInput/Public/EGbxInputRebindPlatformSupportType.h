#pragma once
#include "CoreMinimal.h"
#include "EGbxInputRebindPlatformSupportType.generated.h"

UENUM(BlueprintType)
enum class EGbxInputRebindPlatformSupportType : uint8 {
    PC_Only,
    Console_Only,
    PC_And_Console,
};

