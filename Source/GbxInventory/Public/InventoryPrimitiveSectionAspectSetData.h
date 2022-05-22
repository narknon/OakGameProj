#pragma once
#include "CoreMinimal.h"
#include "InventoryPrimitiveSectionAspectSetData.generated.h"

class UInventoryMaterialAspectData;

USTRUCT(BlueprintType)
struct FInventoryPrimitiveSectionAspectSetData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UInventoryMaterialAspectData* PrimaryMaterialAspect;
    
    UPROPERTY(Transient)
    TArray<UInventoryMaterialAspectData*> MaterialAspects;
    
    GBXINVENTORY_API FInventoryPrimitiveSectionAspectSetData();
};

