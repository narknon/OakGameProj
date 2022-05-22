#pragma once
#include "CoreMinimal.h"
#include "TwitchChannelMessage.generated.h"

USTRUCT(BlueprintType)
struct GBXTWITCH_API FTwitchChannelMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Channel;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserName;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserMessage;
    
    FTwitchChannelMessage();
};

