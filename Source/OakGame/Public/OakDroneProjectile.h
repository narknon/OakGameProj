#pragma once
#include "CoreMinimal.h"
#include "OakAIBalancedProjectile.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "PlayerAlertableInterface.h"
#include "EnvQueryParamsProvider.h"
#include "EPlayerAlertType.h"
#include "OakDroneProjectile.generated.h"

class UTargetableComponent;
class USphereComponent;
class UOakDroneProjectileMovementComponent;
class UOakDamageComponent;
class UTargetingComponent;
class UAIPerceptionStimuliSourceComponent;
class AActor;

UCLASS()
class AOakDroneProjectile : public AOakAIBalancedProjectile, public IEQSQueryResultSourceInterface, public IEnvQueryParamsProvider, public IPlayerAlertableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* Sphere;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDroneProjectileMovementComponent* DroneMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* OakDamage;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetableComponent* Targetable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetingComponent* Targeting;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetOfMovementTarget;
    
    UPROPERTY(EditAnywhere)
    EPlayerAlertType PlayerAlertType;
    
    AOakDroneProjectile();
    UFUNCTION(BlueprintCallable)
    void SetMovementTarget(AActor* MovementTarget);
    
    UFUNCTION(BlueprintPure)
    AActor* GetMovementTarget() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

