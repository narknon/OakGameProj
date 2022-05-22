#pragma once
#include "CoreMinimal.h"
#include "GbxPainterItem.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FGbxPainterItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* Component;
    
    GBXNAV_API FGbxPainterItem();
};

