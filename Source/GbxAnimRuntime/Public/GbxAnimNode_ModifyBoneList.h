#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "InputTransforms.h"
#include "BoneContainer.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "Animation/AnimTypes.h"
#include "GbxAnimNode_ModifyBoneList.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_ModifyBoneList : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> BonesToModify;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> RotationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    FInputTransforms InputTransforms;
    
    FGbxAnimNode_ModifyBoneList();
};

