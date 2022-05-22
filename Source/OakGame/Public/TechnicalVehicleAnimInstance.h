#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAnimInstance.h"
#include "TechnicalVehicleAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(NonTransient)
class OAKGAME_API UTechnicalVehicleAnimInstance : public UOakVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsBigWheel;
    
    UPROPERTY(EditAnywhere)
    FName SlotToPlayBounceOn;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* BrakeBounceBack;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* BrakeBounceFront;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BlendAccelAlpha;
    
    UTechnicalVehicleAnimInstance();
};

