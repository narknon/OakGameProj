#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimData.h"
#include "FaceFXAnimSetData.generated.h"

USTRUCT()
struct FFaceFXAnimSetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<FFaceFXAnimData> Animations;
    
    FACEFX_API FFaceFXAnimSetData();
};

