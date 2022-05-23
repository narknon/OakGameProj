#pragma once
#include "CoreMinimal.h"
#include "EActivityCompletionFriendEventType.generated.h"

UENUM(BlueprintType)
enum class EActivityCompletionFriendEventType :  {
    RaidCompletion,
    CircleOfSlaughterCompletion,
    ProvingGroundsCompletion,
};

