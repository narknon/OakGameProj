#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VehicleCollisionResponseModificationContext.generated.h"

class AVehicle;

UCLASS(BlueprintType)
class GBXVEHICLE_API UVehicleCollisionResponseModificationContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AVehicle* Collider;
    
    UPROPERTY(BlueprintReadOnly)
    AVehicle* Collidee;
    
    UVehicleCollisionResponseModificationContext();
};

