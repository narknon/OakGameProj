#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "CommonAnimTypes.h"
#include "UObject/NoExportTypes.h"
#include "EStretchBonesMarkerMode.h"
#include "BoneControllers/AnimNode_LookAt.h"
#include "GbxAnimNode_StretchBones.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimNode_StretchBones : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference EndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUniformStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimatedTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndAnimatedTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsingStretchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StretchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceToGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStretchBonesMarkerMode MarkerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference LookAtBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LookAtSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAXIS LookAt_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAXIS EndLookAt_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLookUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAXIS LookUp_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EInterpolationBlend::Type> InterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolationTriggerThreashold;
    
    FGbxAnimNode_StretchBones();
};

