#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "WeightedFloatRange.h"
#include "WeaponMaterialWearAspectData.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UWeaponMaterialWearAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FWeightedFloatRange> DirtRanges;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeightedFloatRange> RustRanges;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeightedFloatRange> WearRanges;
    
public:
    UWeaponMaterialWearAspectData();
};

