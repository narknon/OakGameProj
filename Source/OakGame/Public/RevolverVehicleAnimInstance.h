#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAnimInstance.h"
#include "RevolverVehicleAnimInstance.generated.h"

class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class OAKGAME_API URevolverVehicleAnimInstance : public UOakVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BackRaycastDistance;
    
    UPROPERTY(EditAnywhere)
    float UnderRaycastDistance;
    
    UPROPERTY(EditAnywhere)
    FName ProfileName;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* HitSequence;
    
    UPROPERTY(EditAnywhere)
    float HitBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float HitBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float HitPlayRate;
    
    UPROPERTY(EditAnywhere)
    int32 HitLoopCount;
    
    UPROPERTY(EditAnywhere)
    FName HitSlotName;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* BodyMesh;
    
    URevolverVehicleAnimInstance();
};

