#pragma once
#include "CoreMinimal.h"
#include "LightBeam.h"
#include "OakLightBeamInitializationData.h"
#include "OakLightBeam.generated.h"

class UParticleSystemComponent;

UCLASS()
class UOakLightBeam : public ULightBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float BaseStatusEffectChance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BaseStatusEffectDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BaseStatusEffectDuration;
    
protected:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ModifierComponent;
    
public:
    UOakLightBeam();
protected:
    UFUNCTION()
    void OnModifierParticleSystemFinished(UParticleSystemComponent* PSC);
    
public:
    UFUNCTION(BlueprintPure)
    void InitOakChildData(FOakLightBeamInitializationData& InitData) const;
    
};

