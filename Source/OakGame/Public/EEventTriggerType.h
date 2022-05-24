#pragma once
#include "CoreMinimal.h"
#include "EEventTriggerType.generated.h"

UENUM(BlueprintType)
enum class EEventTriggerType : uint8 {
    StreamingEvent_DirectorTriggered,
    StreamingEvent_WorldTriggered,
    StreamingEvent_ViewerTriggered,
    StreamingEvent_MAX UMETA(Hidden),
};

