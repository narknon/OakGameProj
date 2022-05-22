#include "OakStatusEffectsStatics.h"
#include "Templates/SubclassOf.h"

class AActor;
class UOakDamageType;
class AController;

FStatusEffectInstanceReference UOakStatusEffectsStatics::TriggerElementalEffect(AActor* Target, TSubclassOf<UOakDamageType> DamageType, AActor* DamageCauser, AController* InstigatorController, float DamagePerSecond, float ResourceEffectValue, bool bInfiniteDuration) {
    return FStatusEffectInstanceReference{};
}

void UOakStatusEffectsStatics::ClearAllTransientStatusEffects(AActor* Target) {
}

void UOakStatusEffectsStatics::ClearAllElementalEffects(AActor* Target) {
}

UOakStatusEffectsStatics::UOakStatusEffectsStatics() {
}

