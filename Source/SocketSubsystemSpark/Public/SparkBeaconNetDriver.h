#pragma once
#include "CoreMinimal.h"
#include "SparkNetDriver.h"
#include "SparkBeaconNetDriver.generated.h"

UCLASS(NonTransient)
class USparkBeaconNetDriver : public USparkNetDriver {
    GENERATED_BODY()
public:
    USparkBeaconNetDriver();
};

