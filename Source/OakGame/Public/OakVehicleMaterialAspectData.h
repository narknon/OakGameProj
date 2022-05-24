#pragma once
#include "CoreMinimal.h"
#include "InventoryMaterialAspectData.h"
#include "SkinParameterData.h"
#include "OakVehicleMaterialAspectData.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UOakVehicleMaterialAspectData : public UInventoryMaterialAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSkinParameterData SkinParameters;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> MaterialSoftRef;
    
    UOakVehicleMaterialAspectData();
};

