#pragma once
#include "CoreMinimal.h"
#include "RemoteFacingChannel.h"
#include "FacingController.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FFacingController {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRemoteFacingChannel RemoteChannels[3];
    
public:
    FFacingController();
};

