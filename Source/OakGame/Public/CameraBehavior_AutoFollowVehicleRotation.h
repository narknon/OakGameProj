#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_AutoFollowVehicleRotation.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_AutoFollowVehicleRotation : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EaseInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollowInAir: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollowWhileBoosting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinVehicleSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputDelay;
    
public:
    UCameraBehavior_AutoFollowVehicleRotation();
};

