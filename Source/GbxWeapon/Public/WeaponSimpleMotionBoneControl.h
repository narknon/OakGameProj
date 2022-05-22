#pragma once
#include "CoreMinimal.h"
#include "WeaponSimpleMotionControlBase.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "SimpleMotionState.h"
#include "WeaponSimpleMotionBoneControl.generated.h"

UCLASS(EditInlineNew)
class UWeaponSimpleMotionBoneControl : public UWeaponSimpleMotionControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(EditAnywhere)
    FVector IdleTranslation;
    
    UPROPERTY(EditAnywhere)
    FVector ActiveTranslation;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState IdleTranslationState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState ActiveTranslationState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState RecoveryTranslationState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> RotationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(EditAnywhere)
    FRotator IdleRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator ActiveRotation;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState IdleRotationState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState ActiveRotationState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState RecoveryRotationState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
    
    UPROPERTY(EditAnywhere)
    FVector IdleScale;
    
    UPROPERTY(EditAnywhere)
    FVector ActiveScale;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState IdleScaleState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState ActiveScaleState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState RecoveryScaleState;
    
    UWeaponSimpleMotionBoneControl();
};

