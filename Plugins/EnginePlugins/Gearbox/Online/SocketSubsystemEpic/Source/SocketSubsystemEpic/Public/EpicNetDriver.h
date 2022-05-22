#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "EpicNetDriver.generated.h"

UCLASS(NonTransient)
class SOCKETSUBSYSTEMEPIC_API UEpicNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPassthrough;
    
    UEpicNetDriver();
};

