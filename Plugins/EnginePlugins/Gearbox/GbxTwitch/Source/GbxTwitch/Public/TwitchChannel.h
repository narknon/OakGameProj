#pragma once
#include "CoreMinimal.h"
#include "TwitchChannelMessage.h"
#include "OnChannelMessageReceivedDelegate.h"
#include "TwitchChannel.generated.h"

USTRUCT(BlueprintType)
struct GBXTWITCH_API FTwitchChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ChannelName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ChannelDescription;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> ChannelActiveUsers;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTwitchChannelMessage> IncomingChannelMessage;
    
    UPROPERTY()
    FOnChannelMessageReceived OnMessageReceived;
    
    FTwitchChannel();
};

