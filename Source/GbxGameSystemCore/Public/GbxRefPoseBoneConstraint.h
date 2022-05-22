#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "GbxRefPoseBoneConstraint.generated.h"

USTRUCT(BlueprintType)
struct FGbxRefPoseBoneConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    GBXGAMESYSTEMCORE_API FGbxRefPoseBoneConstraint();
};

