#pragma once
#include "CoreMinimal.h"
#include "WwisePlaybackInstance.h"
#include "OnNewAudioInstanceStartedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewAudioInstanceStarted, FWwisePlaybackInstance, StartedInstance);

