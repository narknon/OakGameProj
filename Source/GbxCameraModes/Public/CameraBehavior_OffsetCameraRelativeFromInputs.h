#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior.h"
#include "CameraBehavior_OffsetCameraRelativeFromInputs.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_OffsetCameraRelativeFromInputs : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHackForDayOnePatch;
    
    UPROPERTY(EditAnywhere)
    float LimitPitch;
    
    UPROPERTY(EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(EditAnywhere)
    FBox MoveLimit;
    
    UCameraBehavior_OffsetCameraRelativeFromInputs();
};

