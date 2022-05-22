#pragma once
#include "CoreMinimal.h"
#include "FaceFXSkelMeshComponentId.h"
#include "FaceFXAnimId.h"
#include "FaceFXAnimComponentSet.generated.h"

class UFaceFXAnim;

USTRUCT()
struct FFaceFXAnimComponentSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFaceFXSkelMeshComponentId SkelMeshComponentId;
    
    UPROPERTY(EditAnywhere)
    FFaceFXAnimId AnimationId;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFaceFXAnim> Animation;
    
    FACEFX_API FFaceFXAnimComponentSet();
};

