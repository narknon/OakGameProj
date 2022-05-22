#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "SparkNetConnection.generated.h"

UCLASS(NonTransient)
class USparkNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    USparkNetConnection();
};

