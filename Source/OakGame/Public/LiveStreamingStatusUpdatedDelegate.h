#pragma once
#include "CoreMinimal.h"
#include "LiveStreamingStatusUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLiveStreamingStatusUpdated, bool, IsLiveStreaming);

