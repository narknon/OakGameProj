#include "ActivityFeedReward.h"

UActivityFeedReward::UActivityFeedReward() {
    this->SmallImageUrl = TEXT("activity_feed_mural_small.png");
    this->SmallImageAspectRatio = EActivityFeedImageAspectRatio::FEED_IMAGE_ASPECT_RATIO_16_X_9;
    this->LargeImageUrl = TEXT("activity_feed_mural_large.png");
    this->URLBrowserActionData = NULL;
    this->URLStoreActionData = NULL;
    this->StartGameActionData = NULL;
}

