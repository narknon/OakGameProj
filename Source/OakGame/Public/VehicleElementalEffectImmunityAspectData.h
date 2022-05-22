#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "EOakStatusEffectResourceEffectType.h"
#include "VehicleElementalEffectImmunityAspectData.generated.h"

UCLASS(EditInlineNew)
class UVehicleElementalEffectImmunityAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EOakStatusEffectResourceEffectType ResourceEffectType;
    
    UPROPERTY(EditInstanceOnly)
    bool LinkedToShield;
    
    UVehicleElementalEffectImmunityAspectData();
};

