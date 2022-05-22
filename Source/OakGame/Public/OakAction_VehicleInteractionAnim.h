#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim.h"
#include "OakAction_VehicleInteractionAnim.generated.h"

UCLASS()
class OAKGAME_API UOakAction_VehicleInteractionAnim : public UOakAction_Anim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDetachPawnOnBringUpWeapon;
    
    UPROPERTY(EditAnywhere)
    bool bResetCameraModeOnStart;
    
    UPROPERTY(EditAnywhere)
    bool bInterpolateRotationToZero;
    
    UPROPERTY(EditAnywhere)
    float InterpolateRotationToZeroDuration;
    
    UOakAction_VehicleInteractionAnim();
};

