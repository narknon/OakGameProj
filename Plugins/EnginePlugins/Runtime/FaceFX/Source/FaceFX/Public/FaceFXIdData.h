#pragma once
#include "CoreMinimal.h"
#include "FaceFXIdData.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXIdData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    uint64 ID;
    
    UPROPERTY(EditInstanceOnly)
    FName Name;
    
    FACEFX_API FFaceFXIdData();
};

