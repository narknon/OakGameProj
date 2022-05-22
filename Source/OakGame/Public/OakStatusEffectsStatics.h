#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectsStatics.h"
#include "StatusEffectInstanceReference.h"
#include "OakStatusEffectsStatics.generated.h"

class UOakDamageType;
class AActor;
class AController;

UCLASS()
class UOakStatusEffectsStatics : public UStatusEffectsStatics {
    GENERATED_BODY()
public:
    UOakStatusEffectsStatics();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FStatusEffectInstanceReference TriggerElementalEffect(AActor* Target, TSubclassOf<UOakDamageType> DamageType, AActor* DamageCauser, AController* InstigatorController, float DamagePerSecond, float ResourceEffectValue, bool bInfiniteDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ClearAllTransientStatusEffects(AActor* Target);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ClearAllElementalEffects(AActor* Target);
    
};

