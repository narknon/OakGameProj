#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "GameFramework/Actor.h"
#include "GbxSignificanceEvent.h"
#include "RadiusDamageReplicationManager.generated.h"

class UImpactData;
class UDamageData;
class UGbxDamageType;
class UParticleSystem;
class UExplosionData;
class UWwiseEvent;

UCLASS(NotPlaceable, Transient, Config=Game)
class GBXGAMESYSTEMCORE_API ARadiusDamageReplicationManager : public AActor {
    GENERATED_BODY()
public:
    ARadiusDamageReplicationManager();
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopRadiusEffect(AActor* ContextActor, TSubclassOf<UDamageData> DamageData, bool bStopAllForContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ProcessRadiusRequest(AActor* ContextActor, TSubclassOf<UDamageData> DamageData, TSubclassOf<UGbxDamageType> DamageType, float Radius, FVector_NetQuantize Location, float Damage, UExplosionData* ExplosionData, UParticleSystem* DefaultParticles, UWwiseEvent* DefaultAudioEvent, UImpactData* DefaultImpactData, FGbxSignificanceEvent SignificanceEvent, float Force);
    
};

