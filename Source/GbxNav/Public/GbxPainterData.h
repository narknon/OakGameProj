#pragma once
#include "CoreMinimal.h"
#include "GbxPainterData.generated.h"

class UGbxNavMeshPainterComponent;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxPainterData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGbxNavMeshPainterComponent* Painter;
    
    FGbxPainterData();
};

