#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "VehicleSetBoostDataAspectData.generated.h"

class UVehicleBoostData;

UCLASS(EditInlineNew)
class UVehicleSetBoostDataAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<UVehicleBoostData> BoostDataToSet;
    
    UVehicleSetBoostDataAspectData();
};

