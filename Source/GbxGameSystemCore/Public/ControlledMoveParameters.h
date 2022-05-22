#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControlledMoveParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FControlledMoveParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    float SpeedOverride;
    
    UPROPERTY(Transient)
    float DurationOverride;
    
    UPROPERTY(Transient)
    float LaunchAngleOverride;
    
    UPROPERTY(Transient)
    AActor* TargetActor;
    
    UPROPERTY(Transient)
    FVector TargetLocation;
    
public:
    FControlledMoveParameters();
};

