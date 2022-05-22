#pragma once
#include "CoreMinimal.h"
#include "EGFxMissionLogMissionItemType.generated.h"

UENUM(BlueprintType)
enum class EGFxMissionLogMissionItemType : uint8 {
    Mission,
    EchoLog,
    Header,
};

