#pragma once
#include "CoreMinimal.h"
#include "CloakPrimData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCloakPrimData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bWasHidden;
    
    UPROPERTY(Export)
    UPrimitiveComponent* PrimComp;
    
    GBXAI_API FCloakPrimData();
};

