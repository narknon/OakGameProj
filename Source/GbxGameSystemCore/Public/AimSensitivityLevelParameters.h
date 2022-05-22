#pragma once
#include "CoreMinimal.h"
#include "AimSensitivityLevelParameters.generated.h"

USTRUCT(BlueprintType)
struct FAimSensitivityLevelParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawMaxRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMaxRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningExtraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningExtraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningRampUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningRampUpDelay;
    
    GBXGAMESYSTEMCORE_API FAimSensitivityLevelParameters();
};

