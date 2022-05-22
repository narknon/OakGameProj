#pragma once
#include "CoreMinimal.h"
#include "OnEchoLogInitialPlayFinishedDelegate.h"
#include "EchoLogTrackingInfo.generated.h"

USTRUCT(BlueprintType)
struct FEchoLogTrackingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FOnEchoLogInitialPlayFinished Event;
    
    OAKGAME_API FEchoLogTrackingInfo();
};

