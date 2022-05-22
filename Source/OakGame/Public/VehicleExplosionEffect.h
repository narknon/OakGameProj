#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseVehicleEffectDataWithLocation.h"
#include "VehicleExplosionEffect.generated.h"

class UDamageType;
class UExplosionData;

UCLASS(EditInlineNew)
class UVehicleExplosionEffect : public UBaseVehicleEffectDataWithLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UExplosionData* ExplosionData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> ExplosionDamageType;
    
    UVehicleExplosionEffect();
};

