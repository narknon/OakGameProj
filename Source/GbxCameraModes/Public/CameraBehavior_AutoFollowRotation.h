#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_AutoFollowRotation.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_AutoFollowRotation : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bKeepRelativeRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRelativeToBase: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFollowPitch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFollowYaw: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFollowRoll: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationRate;
    
public:
    UCameraBehavior_AutoFollowRotation();
};

