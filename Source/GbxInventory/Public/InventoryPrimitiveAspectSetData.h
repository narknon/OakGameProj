#pragma once
#include "CoreMinimal.h"
#include "InventoryPrimitiveSectionAspectSetData.h"
#include "InventoryPrimitiveAspectSetData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryPrimitiveAspectSetData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName PrimitiveComponentName;
    
    UPROPERTY(Transient)
    FName PrimitiveComponentTag;
    
    UPROPERTY(Transient)
    TArray<FInventoryPrimitiveSectionAspectSetData> SectionAspectSetList;
    
    GBXINVENTORY_API FInventoryPrimitiveAspectSetData();
};

