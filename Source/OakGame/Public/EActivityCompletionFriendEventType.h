#pragma once
#include "CoreMinimal.h"
#include "EActivityCompletionFriendEventType.generated.h"

UENUM(BlueprintType)
enum class EActivityCompletionFriendEventType : uint8 {
    RaidCompletion,
    CircleOfSlaughterCompletion,
    ProvingGroundsCompletion,
};

