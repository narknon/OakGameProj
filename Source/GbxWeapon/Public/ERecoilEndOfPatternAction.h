#pragma once
#include "CoreMinimal.h"
#include "ERecoilEndOfPatternAction.generated.h"

UENUM(BlueprintType)
enum class ERecoilEndOfPatternAction : uint8 {
    None,
    PingPong,
    Loop,
    Reset,
};

