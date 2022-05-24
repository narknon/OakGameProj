#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VehicleOverrideData.h"
#include "VehicleComponent.generated.h"

class AOakVehicle;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UVehicleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVehicleOverrideData> OverrideByParts;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakVehicle* OwningVehicle;
    
public:
    UVehicleComponent();
};

