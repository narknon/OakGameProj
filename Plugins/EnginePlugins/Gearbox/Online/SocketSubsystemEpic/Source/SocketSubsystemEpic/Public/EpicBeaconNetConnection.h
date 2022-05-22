#pragma once
#include "CoreMinimal.h"
#include "EpicNetConnection.h"
#include "EpicBeaconNetConnection.generated.h"

UCLASS(NonTransient)
class UEpicBeaconNetConnection : public UEpicNetConnection {
    GENERATED_BODY()
public:
    UEpicBeaconNetConnection();
};

