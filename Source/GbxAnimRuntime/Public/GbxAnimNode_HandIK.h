#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_TwoBoneIK.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "GbxAnimNode_HandIK.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_HandIK : public FAnimNode_TwoBoneIK {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference ObjectBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ObjectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform HandOffsetToIkWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWorldIkOverride;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EffectorAlignmentBone;
    
    UPROPERTY(EditAnywhere)
    float AlignToObjectAlpha;
    
    FGbxAnimNode_HandIK();
};

