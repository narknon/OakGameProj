#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "EBoneModifyTransition_TransformType.h"
#include "AlphaBlend.h"
#include "UObject/NoExportTypes.h"
#include "BoneModifyTransition.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FBoneModifyTransition {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference BoneRef;
    
    UPROPERTY()
    EBoneModifyTransition_TransformType Type;
    
    UPROPERTY()
    FAlphaBlend Blend;
    
    UPROPERTY()
    FVector Base;
    
    UPROPERTY()
    FVector Desired;
    
    FBoneModifyTransition();
};

