#pragma once
#include "CoreMinimal.h"
#include "TwitchChannelMessage.h"
#include "OnChannelMessageReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnChannelMessageReceived, const FTwitchChannelMessage&, ChannelUserMessage);

