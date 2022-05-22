#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "OakHostLobbyBeacon.generated.h"

UCLASS(NonTransient)
class UOakHostLobbyBeacon : public UOnlineBeaconHost {
    GENERATED_BODY()
public:
    UOakHostLobbyBeacon();
};

