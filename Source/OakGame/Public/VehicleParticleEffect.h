#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectDataWithLocation.h"
#include "VehicleParticleEffect.generated.h"

class UParticleSystem;

UCLASS(EditInlineNew)
class UVehicleParticleEffect : public UBaseVehicleEffectDataWithLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* ParticleEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAttachToParent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAlwaysSpawnNewInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnOnStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ParticleComponentTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableBeforeFreeze;
    
    UVehicleParticleEffect();
};

