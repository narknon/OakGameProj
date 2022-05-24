#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageGoreModifiers.h"
#include "CriticalHitDamageOverrides.h"
#include "PipelineDamageInput.generated.h"

class UDamageComponent;
class APawn;
class AController;
class UDamageableInterface;
class IDamageableInterface;
class AActor;
class UDamageSource;
class UDamageModifierComponent;
class UGbxDamageType;
class UImpactData;
class UFeedbackData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPipelineDamageInput {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDamageComponent* DamageReceiverComp;
    
    UPROPERTY()
    TScriptInterface<IDamageableInterface> Damageable;
    
    UPROPERTY()
    APawn* InstigatorPawn;
    
    UPROPERTY()
    APawn* AdditionalEventListenerPawn;
    
    UPROPERTY()
    AActor* DamageCauser;
    
    UPROPERTY(Export)
    UDamageModifierComponent* DamageModifierComp;
    
    UPROPERTY()
    AController* InstigatorController;
    
    UPROPERTY()
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY()
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY()
    UImpactData* ImpactData;
    
    UPROPERTY()
    UFeedbackData* InstigatorFeedback;
    
    UPROPERTY()
    uint8 bSimulatedOnClient: 1;
    
    UPROPERTY()
    FCriticalHitDamageOverrides CriticalHitOverrides;
    
    UPROPERTY()
    FDamageGoreModifiers GoreModifiers;
    
    FPipelineDamageInput();
};

