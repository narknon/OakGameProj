#pragma once
#include "CoreMinimal.h"
#include "OnChannelMessageReceivedDelegate.h"
#include "UObject/Object.h"
#include "TwitchChannel.h"
#include "TwitchIRCClient.generated.h"

UCLASS(BlueprintType)
class GBXTWITCH_API UTwitchIRCClient : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FTwitchChannel> PendingChannels;
    
    UPROPERTY(Transient)
    TArray<FTwitchChannel> ConnectedChannels;
    
    UPROPERTY(Transient)
    TArray<FString> IRCCommandsMessages;
    
public:
    UTwitchIRCClient();
    UFUNCTION(BlueprintCallable)
    static void SendChatMessage(const FString& ChannelName, const FString& MESSAGE);
    
    UFUNCTION(BlueprintCallable)
    static void QuitChannel(const FString& ChannelName);
    
    UFUNCTION(BlueprintCallable)
    static void JoinChannel(const FString& ChannelName, FOnChannelMessageReceived OnMessageReceived);
    
    UFUNCTION(BlueprintCallable)
    static void InitChatBot();
    
    UFUNCTION(BlueprintCallable)
    static void ExitChatBot();
    
};

