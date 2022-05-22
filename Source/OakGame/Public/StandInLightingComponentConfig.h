#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StandInLightingComponentConfig.generated.h"

USTRUCT(BlueprintType)
struct FStandInLightingComponentConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLocation;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideIntensity;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    OAKGAME_API FStandInLightingComponentConfig();
};

