#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EQSProxyInterface.h"
#include "LightProjectileExplodeData.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedLightProjectileInitializationData.h"
#include "LightProjectileAttachment.h"
#include "LightProjectileImpactData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "LightProjectileInitializationData.h"
#include "EWeaponShotModifierType.h"
#include "GenericTeamAgentInterface.h"
#include "ELightProjectileQueryActorType.h"
#include "LightProjectile.generated.h"

class UDamageSource;
class UParticleSystemComponent;
class UStaticMeshComponent;
class ULightProjectileData;
class UGbxDamageType;
class AActor;
class UPrimitiveComponent;
class UDamageModifierComponent;
class UWwiseEvent;
class UActorComponent;
class APawn;
class UImpactData;

UCLASS(BlueprintType, Within=LightProjectileManager)
class GBXWEAPON_API ULightProjectile : public UObject, public IEQSProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient)
    int32 SyncID;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ULightProjectileData* Data;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ImpactForce;
    
    UPROPERTY(Transient)
    uint8 bActive: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InitialClientState)
    FReplicatedLightProjectileInitializationData InitialClientState;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Attached)
    FLightProjectileAttachment AttachmentData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Exploded)
    FLightProjectileExplodeData ExplodeData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Impact)
    FLightProjectileImpactData ImpactInfo;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Shutdown)
    uint8 ShutdownID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float StartTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LifeTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HomingStartTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ElapsedTime;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LastHitActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ComponentLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator ComponentRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector LocalStartLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector LocalStartDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GravityScale;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UStaticMeshComponent* BodyComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UParticleSystemComponent* TracerComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> Components;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 NumBounces;
    
    UPROPERTY(Export, Transient)
    UDamageModifierComponent* DamageModifierComp;
    
public:
    ULightProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetLifetime(float NewLifetime);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTargetLocation(FVector HomingLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(AActor* HomingTarget, FVector TargetOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayFeedbackSoundEvent(UWwiseEvent* Event) const;
    
protected:
    UFUNCTION()
    void OnRep_Shutdown();
    
    UFUNCTION()
    void OnRep_InitialClientState();
    
    UFUNCTION()
    void OnRep_Impact();
    
    UFUNCTION()
    void OnRep_Exploded();
    
    UFUNCTION()
    void OnRep_Attached();
    
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
    UFUNCTION()
    void OnAttachedComponentUnregistered(UActorComponent* UnregisteredComponent);
    
    UFUNCTION()
    void OnAttachedComponentCollisionChanged(UPrimitiveComponent* ChangedComponent);
    
    UFUNCTION()
    void OnAttachedActorFractured(const FVector& HitPoint, const FVector& HitDirection);
    
    UFUNCTION()
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void K2_ApplyImpactDamage(const FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHomingMovingDirectlyTowardsTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHoming() const;
    
    UFUNCTION(BlueprintPure)
    void InitChildData(FLightProjectileInitializationData& InitData) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetSource() const;
    
    UFUNCTION(BlueprintPure)
    float GetModifierValue() const;
    
    UFUNCTION(BlueprintPure)
    EWeaponShotModifierType GetModifierType() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    UImpactData* GetImpactDataOverride() const;
    
    UFUNCTION(BlueprintPure)
    UImpactData* GetImpactData() const;
    
    UFUNCTION(BlueprintPure)
    float GetHomingStartTime() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetFiringPatternID() const;
    
    UFUNCTION(BlueprintPure)
    UGbxDamageType* GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDamageCauser() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetAttitudeTowards(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAttachedImpactNormal() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttachedDamageReceiverActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttachedActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAssociatedActor(ELightProjectileQueryActorType ActorType) const;
    
    UFUNCTION(BlueprintCallable)
    void Explode(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void EnableHoming();
    
    UFUNCTION(BlueprintCallable)
    void DisableHoming();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyAreaDamage(const FVector& Origin, AActor* HitActor, const FHitResult& Hit);
    
    
    // Fix for true pure virtual functions not being implemented
};

