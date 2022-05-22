#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "HealthType.h"
#include "OakVehicleShieldAspectData.generated.h"

UCLASS(EditInlineNew)
class UOakVehicleShieldAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FHealthType ShieldHealth;
    
    UPROPERTY(EditAnywhere)
    FName ComparisonTag;
    
public:
    UOakVehicleShieldAspectData();
};

