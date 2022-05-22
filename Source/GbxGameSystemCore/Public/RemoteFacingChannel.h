#pragma once
#include "CoreMinimal.h"
#include "RemoteFacingChannel.generated.h"

USTRUCT(BlueprintType)
struct FRemoteFacingChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 Pitch;
    
    UPROPERTY()
    uint8 Yaw;
    
    GBXGAMESYSTEMCORE_API FRemoteFacingChannel();
};

