#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_ZeroRotationChannel.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_ZeroRotationChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bZeroPitch;
    
    UPROPERTY(EditAnywhere)
    bool bZeroYaw;
    
    UPROPERTY(EditAnywhere)
    bool bZeroRoll;
    
    FAIAspectSettings_ZeroRotationChannel();
};

