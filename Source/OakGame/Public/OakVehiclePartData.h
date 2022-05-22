#pragma once
#include "CoreMinimal.h"
#include "VehiclePartData.h"
#include "OakVehiclePartData.generated.h"

class UVehicleClassIdentifier;

UCLASS(Abstract)
class OAKGAME_API UOakVehiclePartData : public UVehiclePartData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UVehicleClassIdentifier* VehicleClassID;
    
    UOakVehiclePartData();
};

