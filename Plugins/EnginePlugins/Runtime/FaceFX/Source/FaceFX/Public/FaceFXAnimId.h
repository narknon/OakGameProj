#pragma once
#include "CoreMinimal.h"
#include "FaceFXAnimId.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXAnimId {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FName Group;
    
    UPROPERTY(EditInstanceOnly)
    FName Name;
    
    FACEFX_API FFaceFXAnimId();
};

