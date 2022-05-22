#pragma once
#include "CoreMinimal.h"
#include "ProjectedShieldData.h"
#include "ProjectedShieldData_Vehicle.generated.h"

UCLASS()
class UProjectedShieldData_Vehicle : public UProjectedShieldData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool DespawnShieldOnEngineStop;
    
    UProjectedShieldData_Vehicle();
};

