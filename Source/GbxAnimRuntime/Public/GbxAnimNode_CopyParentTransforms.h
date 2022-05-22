#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "GbxAnimNode_CopyParentTransforms.generated.h"

USTRUCT()
struct GBXANIMRUNTIME_API FGbxAnimNode_CopyParentTransforms : public FAnimNode_Base {
    GENERATED_BODY()
public:
    FGbxAnimNode_CopyParentTransforms();
};

