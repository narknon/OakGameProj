#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "OakHostFriendBeacon.generated.h"

UCLASS(NonTransient)
class UOakHostFriendBeacon : public UOnlineBeaconHost {
    GENERATED_BODY()
public:
    UOakHostFriendBeacon();
};

