#pragma once
#include "CoreMinimal.h"
#include "EGbxDialogConversationStatus.generated.h"

UENUM(BlueprintType)
enum class EGbxDialogConversationStatus : uint8 {
    NotFound,
    Pending,
    Canceled,
    Started,
    HoldingConversation,
    Interrupted,
    Succeeded,
};

