#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "OakClientLobbyBeacon.generated.h"

UCLASS(NonTransient)
class UOakClientLobbyBeacon : public UOnlineBeaconClient {
    GENERATED_BODY()
public:
    UOakClientLobbyBeacon();
};

