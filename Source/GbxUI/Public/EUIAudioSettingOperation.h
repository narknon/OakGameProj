#pragma once
#include "CoreMinimal.h"
#include "EUIAudioSettingOperation.generated.h"

UENUM(BlueprintType)
enum class EUIAudioSettingOperation : uint8 {
    Delete,
    Replace,
    Preserve,
};

