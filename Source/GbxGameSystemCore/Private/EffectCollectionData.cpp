#include "EffectCollectionData.h"
#include "Templates/SubclassOf.h"

class UWwiseEvent;
class UEffectCollectionData;
class UObject;
class UParticleSystem;

UWwiseEvent* UEffectCollectionData::StaticGetWwiseEvent(TSubclassOf<UEffectCollectionData> Collection, UObject* ContextObject) const {
    return NULL;
}

void UEffectCollectionData::StaticGetParticleEffectAndWwiseEvent(TSubclassOf<UEffectCollectionData> Collection, UObject* ContextObject, UParticleSystem*& ParticleEffect, UWwiseEvent*& WwiseEvent) const {
}

UParticleSystem* UEffectCollectionData::StaticGetParticleEffect(TSubclassOf<UEffectCollectionData> Collection, UObject* ContextObject) const {
    return NULL;
}

UWwiseEvent* UEffectCollectionData::GetWwiseEvent_Implementation(UObject* ContextObject) const {
    return NULL;
}

void UEffectCollectionData::GetParticleEffectAndWwiseEvent_Implementation(UObject* ContextObject, UParticleSystem*& ParticleEffect, UWwiseEvent*& WwiseEvent) const {
}

UParticleSystem* UEffectCollectionData::GetParticleEffect_Implementation(UObject* ContextObject) const {
    return NULL;
}

UEffectCollectionData::UEffectCollectionData() {
}

