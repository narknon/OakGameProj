#pragma once
#include "CoreMinimal.h"
#include "EActivityFeedImageAspectRatio.generated.h"

UENUM(BlueprintType)
enum class EActivityFeedImageAspectRatio : uint8 {
    FEED_IMAGE_ASPECT_RATIO_1_X_1,
    FEED_IMAGE_ASPECT_RATIO_1_51_X_1,
    FEED_IMAGE_ASPECT_RATIO_2_08_X_1,
    FEED_IMAGE_ASPECT_RATIO_16_X_9,
    FEED_IMAGE_ASPECT_RATIO_4_X_3,
    FEED_IMAGE_ASPECT_RATIO_MAX UMETA(Hidden),
};

