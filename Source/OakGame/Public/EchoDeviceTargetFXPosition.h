#pragma once
#include "CoreMinimal.h"
#include "EchoDeviceTargetFXPosition.generated.h"

class UGbxGFxObject;

USTRUCT(BlueprintType)
struct FEchoDeviceTargetFXPosition {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxGFxObject* UIObject;
    
    OAKGAME_API FEchoDeviceTargetFXPosition();
};

