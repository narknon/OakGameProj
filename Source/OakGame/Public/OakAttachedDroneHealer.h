#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakAttachedDrone.h"
#include "OakAttachedDroneHealer.generated.h"

class ULightBeamData;
class UGbxDamageType;
class UAttributeInitializer;
class AOakVehicle;

UCLASS(Abstract)
class OAKGAME_API AOakAttachedDroneHealer : public AOakAttachedDrone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULightBeamData> LightBeamData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAttributeInitializer> HealingValueInitializer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealingValueFactor;
    
    AOakAttachedDroneHealer();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopHeal(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartHeal(AOakVehicle* Vehicle);
    
};

