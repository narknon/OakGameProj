#pragma once
#include "CoreMinimal.h"
#include "EpicNetDriver.h"
#include "EpicBeaconNetDriver.generated.h"

UCLASS(NonTransient)
class UEpicBeaconNetDriver : public UEpicNetDriver {
    GENERATED_BODY()
public:
    UEpicBeaconNetDriver();
};

