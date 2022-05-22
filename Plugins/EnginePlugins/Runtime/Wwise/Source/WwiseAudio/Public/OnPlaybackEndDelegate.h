#pragma once
#include "CoreMinimal.h"
#include "OnPlaybackEndDelegate.generated.h"

class UWwiseAudioComponent;
class UWwiseEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlaybackEnd, UWwiseAudioComponent*, WAC, UWwiseEvent*, WwiseEvent);

