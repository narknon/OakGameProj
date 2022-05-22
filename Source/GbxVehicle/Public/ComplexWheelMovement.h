#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "ComplexWheelMovement.generated.h"

USTRUCT(BlueprintType)
struct FComplexWheelMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference WheelReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference WheelSteeringPivotReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference ControlArmReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference PhysicalWheelReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspensionDropMaxSpeed;
    
    GBXVEHICLE_API FComplexWheelMovement();
};

