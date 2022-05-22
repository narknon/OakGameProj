#pragma once
#include "CoreMinimal.h"
#include "FaceFXSkelMeshComponentId.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXSkelMeshComponentId {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    FName Name;
    
    FACEFX_API FFaceFXSkelMeshComponentId();
};

