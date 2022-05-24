#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_TrailerHandler.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_TrailerHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspensionDropMaxSpeed;
    
    FAnimNode_TrailerHandler();
};

