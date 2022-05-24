#pragma once
#include "CoreMinimal.h"
#include "ProjectedShield.h"
#include "ProjectedShield_Vehicle.generated.h"

class UMaterialInstanceDynamic;
class UVehicleEffectsComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProjectedShield_Vehicle : public UProjectedShield {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UVehicleEffectsComponent* VehicleEffectsComponent;
    
    UProjectedShield_Vehicle();
    UFUNCTION(BlueprintImplementableEvent)
    void OnShouldDespawnShield();
    
private:
    UFUNCTION()
    void OnPrimaryOccupantExit();
    
    UFUNCTION()
    void OnPrimaryOccupantEnter();
    
    UFUNCTION()
    void OnEngineStop();
    
    UFUNCTION()
    void OnEngineStart();
    
    UFUNCTION()
    void OnDigiThrustStarted();
    
    UFUNCTION()
    void OnDigiThrustEndFinished();
    
};

