#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "UObject/NoExportTypes.h"
#include "VehicleModifyPhysicPropertiesAspectData.generated.h"

UCLASS(EditInlineNew)
class UVehicleModifyPhysicPropertiesAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float AdditionalMass;
    
    UPROPERTY(EditInstanceOnly)
    FVector InertiaTensorScale;
    
    UVehicleModifyPhysicPropertiesAspectData();
};

