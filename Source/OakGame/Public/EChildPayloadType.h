#pragma once
#include "CoreMinimal.h"
#include "EChildPayloadType.generated.h"

UENUM(BlueprintType)
enum EChildPayloadType {
    Payload_Divider,
    Payload_MiniMirv,
    Payload_Mirv,
    Payload_Rain,
    Payload_Spring,
    Payload_Sticky,
    Payload_MAX UMETA(Hidden),
};

