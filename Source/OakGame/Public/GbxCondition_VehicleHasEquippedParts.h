#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_VehicleHasEquippedParts.generated.h"

class AOakVehicle;
class UVehiclePartData;

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_VehicleHasEquippedParts : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AOakVehicle>> IncludedClassesFilter;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AOakVehicle>> ExcludedClassesFilter;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UVehiclePartData>> IncludedPartsFilter;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UVehiclePartData>> ExcludedPartsFilter;
    
    UGbxCondition_VehicleHasEquippedParts();
};

