#pragma once
#include "CoreMinimal.h"
#include "StatusEffectGlobalsData.h"
#include "OakResourceEffectData.h"
#include "OakElementalAuraEffectData.h"
#include "GameplayTagContainer.h"
#include "OakStatusEffectGlobalsData.generated.h"

class UOakElementalEffectData;
class UOakFreezeData;
class UParticleSystem;

UCLASS(BlueprintType)
class UOakStatusEffectGlobalsData : public UStatusEffectGlobalsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakResourceEffectData> OakResourceEffects;
    
    UPROPERTY(EditDefaultsOnly)
    float ElementalFXMaxHealthScalar;
    
    UPROPERTY(EditDefaultsOnly)
    UOakElementalEffectData* FireElementalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakElementalEffectData* ShockElementalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakElementalEffectData* CorrosiveElementalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakElementalEffectData* RadiationElementalEffectData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElementalDeathSelectionThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakElementalAuraEffectData> ElementalAuraEffects;
    
    UPROPERTY(EditDefaultsOnly)
    UOakFreezeData* FreezeTypes[2];
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag NonTransientStatusEffectTag;
    
    UPROPERTY()
    UParticleSystem* StatusEffectParticleSystem;
    
    UOakStatusEffectGlobalsData();
};

