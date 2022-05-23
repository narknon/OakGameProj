#pragma once
#include "CoreMinimal.h"
#include "NumericRange.h"
#include "UObject/NoExportTypes.h"
#include "AIOCameraEntryTransition.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAIOCameraEntryTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TransitionName;
    
    UPROPERTY(EditAnywhere)
    FNumericRange AngleRange;
    
    UPROPERTY(EditAnywhere)
    FVector StartLocation;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLocationDuration;
    
    UPROPERTY(EditAnywhere)
    float LocationDurationOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRotationDuration;
    
    UPROPERTY(EditAnywhere)
    float RotationDurationOverride;
    
    FAIOCameraEntryTransition();
};

