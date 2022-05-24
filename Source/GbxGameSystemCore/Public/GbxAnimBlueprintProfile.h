#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ScreenSizeSelection -FallbackName=ScreenSizeSelection
#include "UObject/NoExportTypes.h"
#include "NumericRange.h"
#include "BoneContainer.h"
#include "BoneControllers/AnimNode_LegIK.h"
#include "BoneBlendParams.h"
#include "EGbxLookAxisOption.h"
#include "UObject/NoExportTypes.h"
#include "ForwardDynamicsNodeProfile.h"
#include "EAnimBPProfileImport.h"
#include "GbxAnimBlueprintProfile.generated.h"

class UPhysicsAsset;
class UAnimSequence;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAnimBlueprintProfile : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bImportedLegIKSettings;
    
    UPROPERTY(EditAnywhere)
    float FootIKTraceUpScale;
    
    UPROPERTY(EditAnywhere)
    float FootIKTraceDownScale;
    
    UPROPERTY(EditAnywhere)
    float FootIKOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector FootIKTargetOffset;
    
    UPROPERTY(EditAnywhere)
    int32 FootIKFootLODThreshold;
    
    UPROPERTY(EditAnywhere)
    FNumericRange MeshOffsetCharacterSpeedRange;
    
    UPROPERTY(EditAnywhere)
    float MeshIKOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bShouldLimitFootDistanceToMeshOffset;
    
    UPROPERTY(EditAnywhere)
    FVector SlopeAdaptation;
    
    UPROPERTY(EditAnywhere)
    FBoneReference SlopeAdaptationBone;
    
    UPROPERTY(EditAnywhere)
    float MaxSlopeAngle;
    
    UPROPERTY(EditAnywhere)
    float SlopeNormalMinInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float SlopeNormalMaxInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    FNumericRange SlopeNormalCharacterSpeedRange;
    
    UPROPERTY(EditAnywhere)
    int32 FootIKLODThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootIKLODInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    FScreenSizeSelection FootIkScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseFootIkScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    FScreenSizeSelection FootIkTraceScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseFootIkTraceScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootIKReachPrecision;
    
    UPROPERTY(EditAnywhere)
    int32 FootIKMaxIterations;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimLegIKDefinition> FootIKLegsDefinition;
    
    UPROPERTY()
    float MinVelocity;
    
    UPROPERTY()
    float MaxVelocity;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ParentBoneToModify;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGbxLookAxisOption::Type> ParentLookAxis;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneBlendParams> BonesToModify;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneBlendParams> EyeBonesToModify;
    
    UPROPERTY(EditAnywhere)
    float LookAtBlinkAngleOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtBlinkAngleOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseEyeMovement;
    
    UPROPERTY(EditAnywhere)
    FRotator EyeShiftMin;
    
    UPROPERTY(EditAnywhere)
    FRotator EyeShiftMax;
    
    UPROPERTY(EditAnywhere)
    FRotator EyeGlanceMin;
    
    UPROPERTY(EditAnywhere)
    FRotator EyeGlanceMax;
    
    UPROPERTY(EditAnywhere)
    float EyeFocusTimeMin;
    
    UPROPERTY(EditAnywhere)
    float EyeFocusTimeMax;
    
    UPROPERTY(EditAnywhere)
    float EyeGlanceTimeMin;
    
    UPROPERTY(EditAnywhere)
    float EyeGlanceTimeMax;
    
    UPROPERTY(EditAnywhere)
    float EyeShiftTimeMin;
    
    UPROPERTY(EditAnywhere)
    float EyeShiftTimeMax;
    
    UPROPERTY(EditAnywhere)
    int32 LookAtEyeLODThreshold;
    
    UPROPERTY(EditAnywhere)
    int32 LookAtLODThreshold;
    
    UPROPERTY(EditAnywhere)
    float LookAtLODInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    FScreenSizeSelection LookAtEyeScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtEyeScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    FScreenSizeSelection LookAtScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    TArray<FForwardDynamicsNodeProfile> ForwardDynamicsNodeList;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FVector TeethOffsetOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseTeethOffsetOverride;
    
    UPROPERTY()
    FBoneReference UpperTeethBoneRef;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> BoneTagToBoneOverrideNameMap;
    
    UPROPERTY(EditAnywhere)
    bool bUseUpperTeethBoneRefOverride;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DefaultIdleLoopAnimation;
    
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UGbxAnimBlueprintProfile();
private:
    UFUNCTION()
    void RebuildBoneLists();
    
    UFUNCTION()
    void AnimBlueprintImportFunction(EAnimBPProfileImport ImportType);
    
};

