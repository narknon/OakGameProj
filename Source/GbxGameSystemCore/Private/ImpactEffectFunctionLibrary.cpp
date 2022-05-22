#include "ImpactEffectFunctionLibrary.h"

class UImpactData;
class AActor;
class UParticleSystemComponent;

void UImpactEffectFunctionLibrary::PlayTraceImpactAndGetParticleSystemComponents(UImpactData* ImpactData, AActor* Instigator, const FVector& TraceStart, const FVector& TraceEnd, TArray<UParticleSystemComponent*>& SpawnedParticleSystemComponents, TEnumAsByte<ECollisionChannel> TraceChannel) {
}

void UImpactEffectFunctionLibrary::PlayTraceImpact(UImpactData* ImpactData, AActor* Instigator, const FVector& TraceStart, const FVector& TraceEnd, TEnumAsByte<ECollisionChannel> TraceChannel, bool bReplicated) {
}

void UImpactEffectFunctionLibrary::PlayHitResultImpactGetParticleSystemComponents(UImpactData* ImpactData, AActor* Instigator, const FHitResult& HitInfo, TArray<UParticleSystemComponent*>& SpawnedParticleSystemComponents) {
}

void UImpactEffectFunctionLibrary::PlayHitResultImpact(UImpactData* ImpactData, AActor* Instigator, const FHitResult& HitInfo, bool bReplicated) {
}

UImpactEffectFunctionLibrary::UImpactEffectFunctionLibrary() {
}

