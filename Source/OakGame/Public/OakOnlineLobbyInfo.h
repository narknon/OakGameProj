#pragma once
#include "CoreMinimal.h"
#include "ENetworkType.h"
#include "EInviteType.h"
#include "EOakOnlineLobbyConnectivityState.h"
#include "OakOnlineLobbyInfo.generated.h"

USTRUCT(BlueprintType)
struct FOakOnlineLobbyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ENetworkType NetworkType;
    
    UPROPERTY(BlueprintReadWrite)
    EInviteType InviteType;
    
    UPROPERTY(BlueprintReadWrite)
    FText CurrentActivity;
    
    UPROPERTY(BlueprintReadWrite)
    EOakOnlineLobbyConnectivityState ConnectivityState;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentConnectedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxConnectedPlayerCount;
    
    OAKGAME_API FOakOnlineLobbyInfo();
};

