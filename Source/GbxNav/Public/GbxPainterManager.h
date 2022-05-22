#pragma once
#include "CoreMinimal.h"
#include "GbxPainterData.h"
#include "GbxPainterManager.generated.h"

class UGbxNavArea;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxPainterManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UGbxNavArea*> NavAreas;
    
    UPROPERTY(Transient)
    TArray<FGbxPainterData> Painters;
    
public:
    FGbxPainterManager();
};

