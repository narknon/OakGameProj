#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_OutrunnerBooster.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_OutrunnerBooster : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_OutrunnerBooster();
};

