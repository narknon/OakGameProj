#pragma once
#include "CoreMinimal.h"
#include "NumericRange.h"
#include "BoneControllers/AnimNode_LegIK.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ScreenSizeSelection -FallbackName=ScreenSizeSelection
#include "BoneContainer.h"
#include "GbxAnimNode_LegIK.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIMEBASE_API FGbxAnimNode_LegIK : public FAnimNode_LegIK {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FootIKTraceUpScale;
    
    UPROPERTY(EditAnywhere)
    float FootIKTraceDownScale;
    
    UPROPERTY(EditAnywhere)
    float FootIKOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector FootIKTargetOffset;
    
    UPROPERTY(EditAnywhere)
    int32 FootIKLODThreshold;
    
    UPROPERTY(EditAnywhere)
    FScreenSizeSelection FootIkTraceScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseFootIkTraceScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    FNumericRange MeshOffsetCharacterSpeedRange;
    
    UPROPERTY(EditAnywhere)
    float MeshIKOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bShouldLimitFootDistanceToMeshOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector SlopeAdaptation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FBoneReference SlopeAdaptationBone;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxSlopeAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SlopeNormalMinInterpSpeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SlopeNormalMaxInterpSpeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNumericRange SlopeNormalCharacterSpeedRange;
    
protected:
    UPROPERTY()
    float MinVelocity;
    
    UPROPERTY()
    float MaxVelocity;
    
public:
    FGbxAnimNode_LegIK();
};

