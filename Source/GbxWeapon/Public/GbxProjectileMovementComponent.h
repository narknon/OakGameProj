#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SoundPerceptionProperties.h"
#include "Engine/EngineTypes.h"
#include "BulletPerceptionProperties.h"
#include "GbxProjectileMovementComponent.generated.h"

class AActor;
class AProjectile;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UGbxProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectilePostLastBounceDelegate, const FHitResult&, ImpactResult);
    
    UPROPERTY(BlueprintAssignable)
    FOnProjectilePostLastBounceDelegate PostLastBounceDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProjectileAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeedWhenDecelerating;
    
protected:
    UPROPERTY()
    AProjectile* OwningProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSmoothedRotationFollowsVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothedRotationSpeed;
    
public:
    UPROPERTY(EditAnywhere)
    bool bDontStopSimulatingAfterHittingAnotherProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumBounces;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBounceParallelToHitNormal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentNumBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFreezeMovementAfterLastBounce;
    
    UPROPERTY(EditAnywhere)
    FBulletPerceptionProperties BulletSensePerception;
    
    UPROPERTY(EditAnywhere)
    FSoundPerceptionProperties ImpactSoundPerception;
    
    UPROPERTY(EditAnywhere)
    bool bCanTriggerGrenadeDodges;
    
    UPROPERTY(EditAnywhere)
    bool bDisablePhysicsWhenAttached;
    
    UPROPERTY(ReplicatedUsing=OnRep_InitialProjectileGravity)
    float InitialProjectileGravity;
    
public:
    UGbxProjectileMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ScaleVelocity(float InScale);
    
protected:
    UFUNCTION()
    void OnRep_InitialProjectileGravity();
    
public:
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

