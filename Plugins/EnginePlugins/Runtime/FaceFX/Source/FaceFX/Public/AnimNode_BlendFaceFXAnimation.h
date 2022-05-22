#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "AnimNode_BlendFaceFXAnimation.generated.h"

USTRUCT(BlueprintType)
struct FACEFX_API FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink ComponentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneModificationMode> RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BoneNamesToExclude;
    
    FAnimNode_BlendFaceFXAnimation();
};

