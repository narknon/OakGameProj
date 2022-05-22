#pragma once
#include "CoreMinimal.h"
#include "ESimpleMotionInputHandler.h"
#include "WeaponSkeletalControlBase.h"
#include "AttributeInitializationData.h"
#include "WeaponSimpleMotionControlBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWeaponSimpleMotionControlBase : public UWeaponSkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bStartActive: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoActivate: 1;
    
    UPROPERTY(EditAnywhere)
    ESimpleMotionInputHandler InputHandler;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ControlValue;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitMinControlValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitMaxControlValue: 1;
    
    UPROPERTY(EditAnywhere)
    float MinControlValue;
    
    UPROPERTY(EditAnywhere)
    float MaxControlValue;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseSpeed;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseMaxValue;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseDecayDelay;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseDecaySpeed;
    
    UWeaponSimpleMotionControlBase();
};

