#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "InitialRotationAxisParams.h"
#include "CameraBehavior_InitialRotation.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_InitialRotation : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bControlPitch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bControlYaw: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInterruptedByInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableInput: 1;
    
    UPROPERTY(EditAnywhere)
    FInitialRotationAxisParams Pitch;
    
    UPROPERTY(EditAnywhere)
    FInitialRotationAxisParams Yaw;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* InitialCondition;
    
    UCameraBehavior_InitialRotation();
};

