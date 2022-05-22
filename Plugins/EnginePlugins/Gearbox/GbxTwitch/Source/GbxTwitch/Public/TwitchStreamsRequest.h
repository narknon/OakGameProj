#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TwitchStreamInfo.h"
#include "OnStreamsInfoReceivedDelegate.h"
#include "TwitchStreamsRequest.generated.h"

USTRUCT()
struct FTwitchStreamsRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid RequestGuid;
    
    UPROPERTY()
    TArray<FTwitchStreamInfo> StreamsFound;
    
    UPROPERTY()
    FOnStreamsInfoReceived OnStreamInfoReceived;
    
    UPROPERTY()
    bool bResponseReceived;
    
    UPROPERTY()
    bool bGameNameResolved;
    
    UPROPERTY()
    bool bUserNameResolved;
    
    UPROPERTY()
    int32 MaxNbStreams;
    
    UPROPERTY()
    FString GameName;
    
    UPROPERTY()
    FString UserLogin;
    
    UPROPERTY()
    FString Language;
    
    GBXTWITCH_API FTwitchStreamsRequest();
};

