#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "StatusEffectModifiers.h"
#include "VehicleStatusEffectModifiersAspectData.generated.h"

UCLASS(EditInlineNew)
class UVehicleStatusEffectModifiersAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<FStatusEffectModifiers> StatusEffectModifiers;
    
    UPROPERTY(EditInstanceOnly)
    bool LinkedToShield;
    
    UPROPERTY(EditInstanceOnly)
    bool bHasHijackProtection;
    
    UVehicleStatusEffectModifiersAspectData();
};

