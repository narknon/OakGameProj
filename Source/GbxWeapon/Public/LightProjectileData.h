#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AttributeInitializationData.h"
#include "GbxSignificanceEvent.h"
#include "ELightProjectileTracerThrottleLevel.h"
#include "LightProjectileTimedEvent.h"
#include "BulletPerceptionProperties.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SoundPerceptionProperties.h"
#include "LightProjectileAudioProperties.h"
#include "LightProjectileRingSettings.h"
#include "LightProjectileData.generated.h"

class ULightProjectile;
class UParticleSystem;
class UStaticMesh;
class UEffectCollectionData;
class UImpactData;
class UExplosionData;
class UFeedbackData;
class ULightProjectileMoveModifier;
class UDamageSource;
class UDamageData;
class UConditionalDamageModifier;
class UWwiseEvent;
class AActor;

UCLASS(Blueprintable, Const)
class GBXWEAPON_API ULightProjectileData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightProjectile> ProjectileClass;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* BodyMesh;
    
    UPROPERTY(EditAnywhere)
    FTransform BodyTransform;
    
    UPROPERTY(EditAnywhere)
    FGbxSignificanceEvent TracerSignificanceEvent;
    
    UPROPERTY(EditAnywhere)
    ELightProjectileTracerThrottleLevel MaxTracerThrottleLevel;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* TracerFX;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> TracerFXCollection;
    
    UPROPERTY(EditAnywhere)
    FName TracerFXBodySocket;
    
    UPROPERTY(EditAnywhere)
    FTransform TracerFXTransform;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayImpactEffectOnExplode: 1;
    
    UPROPERTY(EditAnywhere)
    UExplosionData* ExplosionData;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* DamageInstigatorFeedback;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* AttachedFX;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> AttachedFXCollection;
    
    UPROPERTY(EditAnywhere)
    FName AttachedFXBodySocket;
    
    UPROPERTY(EditAnywhere)
    FTransform AttachedFXTransform;
    
    UPROPERTY(EditAnywhere)
    float BounceEffectDelay;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    FRotator InitialRelativeRotation;
    
    UPROPERTY(EditAnywhere)
    float Acceleration;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY()
    float RicochetFriction;
    
    UPROPERTY(EditAnywhere)
    float BounceFriction;
    
    UPROPERTY(EditAnywhere)
    float Bounciness;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<ULightProjectileMoveModifier*> MoveModifiers;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttachedLifetimeEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    float AttachedLifetime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    float TraceInterval;
    
    UPROPERTY(EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY()
    int32 MaxRicochet;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBounces;
    
    UPROPERTY(EditAnywhere)
    int32 MaxReflections;
    
    UPROPERTY(EditAnywhere)
    float ProxyRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> ProxyTraceChannel;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreCollisionWithInstigator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSetTeamCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreCollisionWithInstigatorTeam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPenetratesTargetables: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPenetratesWorld: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBounceOffTargetables: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCollideWithSource: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableProxyCollisionEvents: 1;
    
    UPROPERTY(EditAnywhere)
    float CollideWithSourceDelay;
    
    UPROPERTY(EditAnywhere)
    TArray<FLightProjectileTimedEvent> TimedEvents;
    
    UPROPERTY(EditAnywhere)
    FBulletPerceptionProperties BulletSensePerception;
    
    UPROPERTY(EditAnywhere)
    FSoundPerceptionProperties ImpactSoundPerception;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanTriggerBulletDodges: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTargetedImpactRadiusDamage: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY()
    TSubclassOf<UDamageData> DamageAreaData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(EditAnywhere)
    float DamageAreaHitOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 bDamageFalloff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRequiresInstigatorToDoDamage: 1;
    
    UPROPERTY(EditAnywhere)
    float AttachDamageScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ImpactedActorDamageScale;
    
    UPROPERTY(EditAnywhere)
    TArray<UConditionalDamageModifier*> ConditionalDamageModifiers;
    
    UPROPERTY(EditAnywhere)
    FLightProjectileAudioProperties AudioProperties;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* AttachedSound;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanAttachToTargetables: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanAttachToFriendlies: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanAttachToWorld: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideBodyOnAttach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDeactivateTracerFXOnAttach: 1;
    
    UPROPERTY(EditAnywhere)
    FName DeactivateTracerFXEmitterOnAttach;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableHomingOnSpawn: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideAimAssistSettings: 1;
    
    UPROPERTY(EditAnywhere)
    FVector2D MagnetismRate;
    
    UPROPERTY(EditAnywhere)
    float MaxMagnetismDeflection;
    
    UPROPERTY(EditAnywhere)
    FLightProjectileRingSettings RingSettings;
    
    UPROPERTY(EditAnywhere)
    uint8 bMakeProjectileRing: 1;
    
    UPROPERTY(EditAnywhere)
    bool bCallOnDamageEventOncePerHit;
    
    ULightProjectileData();
    UFUNCTION(BlueprintImplementableEvent)
    void OnRicochet(ULightProjectile* Projectile, const FHitResult& Hit, const FVector ImpactVelocity) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProxyImpact(ULightProjectile* Projectile, const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLifetimeExpired(ULightProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnImpact(ULightProjectile* Projectile, const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExplode(ULightProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamage(ULightProjectile* Projectile, const FHitResult& Hit, bool bCritical) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBegin(ULightProjectile* Projectile) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttached(ULightProjectile* Projectile, AActor* AttachedActor) const;
    
    UFUNCTION()
    void GetTimedEventNameList(TArray<FName>& FuncList) const;
    
};

