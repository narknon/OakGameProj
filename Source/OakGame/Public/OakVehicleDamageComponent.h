#pragma once
#include "CoreMinimal.h"
#include "OakDamageComponent.h"
#include "VehicleOverrideData.h"
#include "OakVehicleDamageComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakVehicleDamageComponent : public UOakDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVehicleOverrideData> OverrideByParts;
    
    UOakVehicleDamageComponent();
};

