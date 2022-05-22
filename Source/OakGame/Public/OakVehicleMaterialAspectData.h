#pragma once
#include "CoreMinimal.h"
#include "SkinParameterData.h"
#include "InventoryMaterialAspectData.h"
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

