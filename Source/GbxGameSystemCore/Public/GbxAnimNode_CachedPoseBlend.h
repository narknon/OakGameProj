#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "GbxAnimNode_CachedPoseBlend.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimNode_CachedPoseBlend : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FGbxAnimNode_CachedPoseBlend();
};

