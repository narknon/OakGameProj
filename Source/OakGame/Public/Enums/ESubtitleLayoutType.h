#pragma once
#include "CoreMinimal.h"
#include "ESubtitleLayoutType.generated.h"

UENUM(BlueprintType)
enum class ESubtitleLayoutType : uint8 {
    None,
    SubtitlesOnly,
    ClosedCaptionsOnly,
    Both,
};

