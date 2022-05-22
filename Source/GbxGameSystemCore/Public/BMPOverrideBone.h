#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BMPOverrideBone.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FBMPOverrideBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneRef;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    FBMPOverrideBone();
};

