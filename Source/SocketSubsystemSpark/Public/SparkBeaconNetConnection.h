#pragma once
#include "CoreMinimal.h"
#include "SparkNetConnection.h"
#include "SparkBeaconNetConnection.generated.h"

UCLASS(NonTransient)
class USparkBeaconNetConnection : public USparkNetConnection {
    GENERATED_BODY()
public:
    USparkBeaconNetConnection();
};

