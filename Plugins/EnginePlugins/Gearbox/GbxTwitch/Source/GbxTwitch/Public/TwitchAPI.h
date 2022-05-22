#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnStreamsInfoReceivedDelegate.h"
#include "TwitchAPI.generated.h"

UCLASS(BlueprintType)
class GBXTWITCH_API UTwitchAPI : public UObject {
    GENERATED_BODY()
public:
    UTwitchAPI();
    UFUNCTION(BlueprintCallable)
    static void RequestTwitchStreams(int32 MaxNbStreams, const FString& GameName, const FString& UserLogin, const FString& Language, FOnStreamsInfoReceived StreamInfoReceivedDelegate);
    
};

