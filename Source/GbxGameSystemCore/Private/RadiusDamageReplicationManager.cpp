#include "RadiusDamageReplicationManager.h"
#include "Templates/SubclassOf.h"

class AActor;
class UImpactData;
class UDamageData;
class UGbxDamageType;
class UParticleSystem;
class UExplosionData;
class UWwiseEvent;

void ARadiusDamageReplicationManager::Multicast_StopRadiusEffect_Implementation(AActor* ContextActor, TSubclassOf<UDamageData> DamageData, bool bStopAllForContext) {
}

void ARadiusDamageReplicationManager::Multicast_ProcessRadiusRequest_Implementation(AActor* ContextActor, TSubclassOf<UDamageData> DamageData, TSubclassOf<UGbxDamageType> DamageType, float Radius, FVector_NetQuantize Location, float Damage, UExplosionData* ExplosionData, UParticleSystem* DefaultParticles, UWwiseEvent* DefaultAudioEvent, UImpactData* DefaultImpactData, FGbxSignificanceEvent SignificanceEvent, float Force) {
}

ARadiusDamageReplicationManager::ARadiusDamageReplicationManager() {
}

