#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimData.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXAnimData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> RawData;
    
    FACEFX_API FFaceFXAnimData();
};

