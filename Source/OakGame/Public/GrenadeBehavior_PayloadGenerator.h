#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadGenerator.generated.h"

class UDamageSource;
class UDamageData;
class UWwiseEvent;
class UHealthTypeData;
class UGbxDamageType;
class UParticleSystem;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadGenerator : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UHealthTypeData* TriggeringHealthType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageData> HealingDamageData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> HealingDamageType;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* HealingParticles;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UDamageSource>> ValidDamageSources;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* HealingAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* HealingImpactAudioEvent;
    
public:
    UGrenadeBehavior_PayloadGenerator();
};

