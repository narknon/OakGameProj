#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "GbxRefPoseBoneConstraint.h"
#include "GbxAnimNode_RefPoseConstraints.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimNode_RefPoseConstraints : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGbxRefPoseBoneConstraint> Constraints;
    
    FGbxAnimNode_RefPoseConstraints();
};

