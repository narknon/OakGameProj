#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "OakClientFriendBeacon.generated.h"

UCLASS(NonTransient)
class UOakClientFriendBeacon : public UOnlineBeaconClient {
    GENERATED_BODY()
public:
    UOakClientFriendBeacon();
};

