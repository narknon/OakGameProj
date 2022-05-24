#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "GbxAnimNode_Spin.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_Spin : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationAmount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    FGbxAnimNode_Spin();
};

