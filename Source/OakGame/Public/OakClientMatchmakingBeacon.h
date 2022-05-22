#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "OakClientMatchmakingBeacon.generated.h"

UCLASS(NonTransient)
class UOakClientMatchmakingBeacon : public UOnlineBeaconClient {
    GENERATED_BODY()
public:
    UOakClientMatchmakingBeacon();
};

