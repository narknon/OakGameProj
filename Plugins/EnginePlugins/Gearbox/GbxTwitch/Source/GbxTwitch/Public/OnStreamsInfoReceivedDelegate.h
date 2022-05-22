#pragma once
#include "CoreMinimal.h"
#include "TwitchStreamInfo.h"
#include "OnStreamsInfoReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnStreamsInfoReceived, const TArray<FTwitchStreamInfo>&, Streams);

