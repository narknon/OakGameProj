#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "SimpleMotionState.h"
#include "GbxAnimNode_SimpleMotionBoneControl.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimNode_SimpleMotionBoneControl : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ControlValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPaused;
    
    UPROPERTY(EditAnywhere)
    bool bActivateAfterRecovery;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IdleSpeedControlValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActiveSpeedControlValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecoverySpeedControlValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector IdleTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator IdleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector IdleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ActiveScale;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState IdleScaleState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState ActiveScaleState;
    
    UPROPERTY(EditAnywhere)
    FSimpleMotionState RecoveryScaleState;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseSpeed;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseMaxValue;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseDecayDelay;
    
    UPROPERTY(EditAnywhere)
    float ControlImpulseDecaySpeed;
    
    FGbxAnimNode_SimpleMotionBoneControl();
};

