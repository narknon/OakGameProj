#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GbxTrajectometerTraceData.h"
#include "AttributeInitializationData.h"
#include "GbxTrajectometerComponent.generated.h"

class UParticleSystemComponent;
class AGbxTrajectometerProjectile;
class USceneComponent;
class AProjectile;
class UParticleSystem;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UGbxTrajectometerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimulationResultEvent, const FHitResult&, HitResult);
    
private:
    UPROPERTY(Transient)
    AGbxTrajectometerProjectile* SimulatorProjectile;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* TrailParticle;
    
    UPROPERTY(Export, Transient)
    USceneComponent* ProjectileUpdatedComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimulationStepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimulationMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AGbxTrajectometerProjectile> SimulatorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData ProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData ProjectileMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData ProjectileAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData ProjectileGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ProjectileInitialDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxTrajectometerTraceData TraceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AProjectile> ProjectileToSimulate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* TrailEmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OverrideSocket;
    
    UPROPERTY(EditAnywhere)
    uint8 bStartFromWeapon: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStartFromViewLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseSocketAsStartRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSimulateWeaponProjectile: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseProjectileForCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bConvergeTowardsAimLocation: 1;
    
    UPROPERTY(BlueprintAssignable)
    FSimulationResultEvent OnPostSimulation;
    
    UGbxTrajectometerComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateCollisionShape();
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectometerEnabled(bool bEnabled);
    
};

