#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "BoneWeightCurveOverride.h"
#include "UObject/NoExportTypes.h"
#include "GbxAnimNode_BlendTwoPosesPerBone.generated.h"

class UGbxBoneSet;
class UGbxAnimInstance;

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_BlendTwoPosesPerBone : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink PoseA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink PoseB;
    
protected:
    UPROPERTY()
    TArray<float> CachedBlendWeights;
    
    UPROPERTY()
    TArray<float> DynamicCachedBlendWeights;
    
    UPROPERTY()
    TArray<FBoneWeightCurveOverride> BoneWeightCurveOverrides;
    
    UPROPERTY(Transient)
    UGbxAnimInstance* GbxAnimInstance;
    
    UPROPERTY()
    FGuid SkeletonGuid;
    
    UPROPERTY()
    FGuid VirtualBoneGuid;
    
    UPROPERTY(EditAnywhere)
    UGbxBoneSet* BoneSet;
    
    UPROPERTY()
    FGuid BoneSetGuid;
    
    UPROPERTY(EditAnywhere)
    FName ActionSlotName;
    
public:
    FGbxAnimNode_BlendTwoPosesPerBone();
};

