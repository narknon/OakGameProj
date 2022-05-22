#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakProjectile.h"
#include "AIProjectileInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GrenadeAttachedTrail.h"
#include "PayloadInstanceData.h"
#include "GrenadeChildGenerationData.h"
#include "EnvQueryParams.h"
#include "EChildPayloadType.h"
#include "Grenade.generated.h"

class USphereComponent;
class AGrenadeMod;
class AOakCharacter;
class UCapsuleComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UStaticMesh;
class UGrenadeProjectileMovementComponent;
class UGrenadeHomingComponent;
class UDrunkenRandomMovementComponent;
class UDrunkenWaveMovementComponent;
class AActor;
class UWwiseAudioComponent;
class UParticleSystemComponent;
class UGrenadeBehavior_Delivery;
class UWwiseEvent;
class UGrenadeBehavior_Payload;
class UElementalEffectCollectionData;
class UGrenadeBehavior;
class UParticleSystem;
class AGrenade;

UCLASS()
class OAKGAME_API AGrenade : public AOakProjectile, public IAIProjectileInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    AGrenadeMod* GrenadeMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOakCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GrenadeMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DefaultMesh;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StandMesh;
    
    UPROPERTY(Export)
    UCapsuleComponent* StandCapsuleCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ChildMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGrenadeProjectileMovementComponent* GrenadeMovementComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UGrenadeHomingComponent* GrenadeHomingComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UDrunkenRandomMovementComponent* RandomMovementComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UDrunkenWaveMovementComponent* WaveMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWwiseAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasImpacted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeImpactFuseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerFuseOnImpact;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* FuseWarningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCauseDamageOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnExplode;
    
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> AttachedParticles;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* AttachedTrail;
    
    UPROPERTY(Transient)
    TArray<FGrenadeAttachedTrail> AttachedTrailStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialVelocityZOffset;
    
    UPROPERTY(Replicated)
    float GrenadeDamage;
    
    UPROPERTY(Replicated)
    float GrenadeExplosionRadius;
    
    UPROPERTY(Replicated)
    float GrenadeExplosionForce;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeChildGenerationData ChildGenerationData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bStopRotatingWhenNotMoving;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bUseDefaultMesh;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UGrenadeBehavior_Delivery* DeliveryMethod;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FPayloadInstanceData DeliveryInstanceData;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TMap<UGrenadeBehavior_Payload*, FPayloadInstanceData> PayloadMethods;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    float GrenadeMeshCollisionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UElementalEffectCollectionData> BasicTrailData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWwiseEvent* FuseTriggeredAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryParams BouncyAimAssistQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAssistAngle;
    
    UPROPERTY(Transient)
    float AssistAngleDot;
    
public:
    AGrenade();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void UnstickGrenade(AActor* DamageReceiver, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void TurnAttachedTrailOn(bool bRestartTrail);
    
    UFUNCTION(BlueprintCallable)
    void StopAudioEventFromBehavior(TSubclassOf<UGrenadeBehavior> BehaviorClass);
    
    UFUNCTION(BlueprintCallable)
    void StopAudioEvent(UWwiseEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetLongbowTarget(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLingering(bool bIsLingering);
    
    UFUNCTION()
    void SetFuseTriggeredAudioEvent(UWwiseEvent* NewFuseTriggerEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachedTrail(UParticleSystem* NewTrail, FName TrailName);
    
    UFUNCTION(BlueprintCallable)
    void ResetFuse();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedTrail(bool bDestroyTrail, bool bAttachingNewTrail, FName TrailName);
    
    UFUNCTION()
    void OnStuckGrenadeActorDestroyed(AActor* Actor);
    
    UFUNCTION()
    void OnGrenadeStop(const FHitResult& ImpactResult);
    
    UFUNCTION()
    void OnGrenadeLastBounce(const FHitResult& ImpactResult);
    
    UFUNCTION()
    void OnGrenadeBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MultiplyRadiusBy(float RadiusScalar);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MultiplyDamageBy(float DamageScalar);
    
    UFUNCTION(BlueprintCallable)
    bool IsLingering();
    
    UFUNCTION(BlueprintCallable)
    void IncrementChildOffset(AGrenade* ParentGrenade, const UGrenadeBehavior_Payload* Payload);
    
    UFUNCTION(BlueprintCallable)
    void IgnorePayloadMethod(TSubclassOf<UGrenadeBehavior_Payload> PayloadToIgnore);
    
    UFUNCTION(BlueprintCallable)
    bool GrenadeUsesPayload(TSubclassOf<UGrenadeBehavior_Payload> Payload);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPayloadChildValue(TEnumAsByte<EChildPayloadType> PayloadType);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLongbowTarget();
    
    UFUNCTION(BlueprintPure)
    FPayloadInstanceData GetInstanceDataFromPayload(const UGrenadeBehavior_Payload* Payload);
    
    UFUNCTION(BlueprintCallable)
    UGrenadeHomingComponent* GetHomingComponent();
    
    UFUNCTION(BlueprintPure)
    float GetGrenadeRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetGrenadeDamage() const;
    
    UFUNCTION(BlueprintCallable)
    UDrunkenWaveMovementComponent* GetDrunkenWaveComponent();
    
    UFUNCTION(BlueprintCallable)
    UDrunkenRandomMovementComponent* GetDrunkenRandomComponent();
    
    UFUNCTION(BlueprintPure)
    FGrenadeChildGenerationData GetChildOffset() const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystemComponent* GetAttachedTrail(FName TrailName) const;
    
    UFUNCTION(BlueprintCallable)
    void FuseTriggered();
    
    UFUNCTION(BlueprintCallable)
    void DisableBasicTrail();
    
    UFUNCTION(BlueprintCallable)
    void ClearDeliveryMethod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIProjectile_Disarm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIProjectile_Detonate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AIProjectile_CanBeStolen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIProjectile_Arm();
    
    
    // Fix for true pure virtual functions not being implemented
};

