#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakVehicleAspectData.h"
#include "VehicleCollisionDamageAspectData.generated.h"

class UGbxDamageType;

UCLASS(EditInlineNew)
class UVehicleCollisionDamageAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool LinkedToShield;
    
    UPROPERTY(EditInstanceOnly)
    bool bLinkedToBoost;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UVehicleCollisionDamageAspectData();
};

