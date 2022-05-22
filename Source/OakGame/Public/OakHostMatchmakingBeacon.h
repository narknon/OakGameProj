#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "OakHostMatchmakingBeacon.generated.h"

UCLASS(NonTransient)
class UOakHostMatchmakingBeacon : public UOnlineBeaconHost {
    GENERATED_BODY()
public:
    UOakHostMatchmakingBeacon();
};

