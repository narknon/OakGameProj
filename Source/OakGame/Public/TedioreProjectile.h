#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Projectile.h"
#include "VehicleContactPtModifierInterface.h"
#include "AIProjectileInterface.h"
#include "Engine/EngineTypes.h"
#include "EnvQueryParams.h"
#include "AttributeInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "EBehaviorOutput.h"
#include "TedioreProjectile.generated.h"

class UGbxProjectileMovementComponent;
class URotatingMovementComponent;
class UStaticMeshComponent;
class UWwiseAudioComponent;
class USocketComponent;
class UParticleSystemComponent;
class UTedioreBehavior;
class AWeapon;
class UGrenadeHomingComponent;
class UDrunkenBaseMovementComponent;
class UWwiseEvent;
class UGbxAttributeData;
class UParticleSystem;
class ATedioreProjectile;

UCLASS()
class ATedioreProjectile : public AProjectile, public IAIProjectileInterface, public IVehicleContactPtModifierInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RotatingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWwiseAudioComponent* WwiseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USocketComponent* FireMuzzleComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* AttachedTrail;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTedioreBehavior*> TedioreBehaviors;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* OwningWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGbxProjectileMovementComponent* TedioreProjectileMovement;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UGrenadeHomingComponent* HomingComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UDrunkenBaseMovementComponent* DrunkenComponent;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    UWwiseEvent* CachedWeaponFireAudio;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoUsed;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectilesPerShot;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotAmmoCost;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float ShotDamage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactTriggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateWhenThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserSightSocketName;
    
    UPROPERTY(Transient)
    bool bHasMirved;
    
    UPROPERTY(Replicated, Transient)
    bool bIsMirvChild;
    
    UPROPERTY(Transient)
    float MirvBaseDamage;
    
    UPROPERTY(Transient)
    bool bIgnoreWeaponVisualCloning;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* NumMirvProjectileAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryParams BouncyAimAssistQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAssistAngle;
    
    UPROPERTY(Transient)
    float AssistAngleDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeInitializationData StatusEffectDamageScalar;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnProjectileStuck)
    bool bIsStuck;
    
public:
    ATedioreProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TurnAttachedTrailOn(bool bRestartTrail);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachedTrail(UParticleSystem* NewTrail);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedTrail(bool bDestroyTrail);
    
protected:
    UFUNCTION()
    void OnRep_OnProjectileStuck();
    
public:
    UFUNCTION()
    void OnProjectileLastBounce(const FHitResult& ImpactResult);
    
    UFUNCTION()
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBehaviorInitialized(TSubclassOf<UTedioreBehavior> BehaviorClass);
    
    UFUNCTION(BlueprintCallable)
    static void K2_SpawnTedioreProjectile(AWeapon* TedioreWeapon, TSubclassOf<ATedioreProjectile> TedioreClass);
    
    UFUNCTION(BlueprintPure)
    bool IsMirvChild() const;
    
    UFUNCTION(BlueprintCallable)
    UGrenadeHomingComponent* GetHomingComponent();
    
    UFUNCTION(BlueprintCallable)
    UDrunkenBaseMovementComponent* GetDrunkenComponent();
    
    UFUNCTION(BlueprintPure)
    UParticleSystemComponent* GetAttachedTrail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UTedioreBehavior* FindBehaviorByClass(TSubclassOf<UTedioreBehavior> BehaviorClass, EBehaviorOutput& Branches, bool bCheckChildClasses) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float CalculateExplosionDamage(float DamagePerShot, int32 BulletsPerShot) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

