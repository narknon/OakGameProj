#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GearSoldByFriendData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGearSoldByFriendData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GearSerialNumber;
    
    UPROPERTY()
    int32 PlayerClassIdentifierHash;
    
    UPROPERTY()
    FUniqueNetIdRepl FriendNetId;
    
    FGearSoldByFriendData();
};

