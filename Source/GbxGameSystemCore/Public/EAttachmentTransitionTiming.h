#pragma once
#include "CoreMinimal.h"
#include "EAttachmentTransitionTiming.generated.h"

UENUM(BlueprintType)
enum class EAttachmentTransitionTiming : uint8 {
    ChangePawnBeforeTransition,
    ChangePawnAfterTransition,
    AttachBaseDuringTransition,
};

