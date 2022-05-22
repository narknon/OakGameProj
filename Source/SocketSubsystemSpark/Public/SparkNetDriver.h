#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "SparkNetDriver.generated.h"

UCLASS(NonTransient)
class SOCKETSUBSYSTEMSPARK_API USparkNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPassthrough;
    
    USparkNetDriver();
};

