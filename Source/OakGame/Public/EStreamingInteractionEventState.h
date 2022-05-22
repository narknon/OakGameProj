#pragma once
#include "CoreMinimal.h"
#include "EStreamingInteractionEventState.generated.h"

UENUM(BlueprintType)
enum class EStreamingInteractionEventState :  {
    StreamingEvent_Disabled,
    StreamingEvent_Preliminary,
    StreamingEvent_Standby,
    StreamingEvent_Active,
    StreamingEvent_MAX UMETA(Hidden),
};

