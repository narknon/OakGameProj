#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "DamageData.h"
#include "DamageDataCustomStatusEffectApplicationSpec.h"
#include "EDamagePresentationModifier.h"
#include "OakDamageData.generated.h"

class ULightBeamData;

UCLASS()
class OAKGAME_API UOakDamageData : public UDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseStatusEffectChance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseStatusEffectDamage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseStatusEffectDuration;
    
    UPROPERTY(EditAnywhere)
    FDamageDataCustomStatusEffectApplicationSpec CustomStatusEffect;
    
    UPROPERTY(EditAnywhere)
    bool bPenetrates;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightBeamData> LightBeamData;
    
    UPROPERTY(EditAnywhere)
    FName BeamTargetSocket;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyDrawParticleIfShieldsAreDepleted;
    
    UPROPERTY(EditAnywhere)
    bool bRootCharacter;
    
    UPROPERTY(EditAnywhere)
    EDamagePresentationModifier PresentationModifier;
    
    UOakDamageData();
};

