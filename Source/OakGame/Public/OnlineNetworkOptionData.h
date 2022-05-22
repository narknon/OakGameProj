#pragma once
#include "CoreMinimal.h"
#include "ENetworkType.h"
#include "EInviteType.h"
#include "OnlineNetworkOptionData.generated.h"

USTRUCT(BlueprintType)
struct FOnlineNetworkOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Label;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly)
    ENetworkType NetworkType;
    
    UPROPERTY(BlueprintReadOnly)
    EInviteType InviteType;
    
    OAKGAME_API FOnlineNetworkOptionData();
};

