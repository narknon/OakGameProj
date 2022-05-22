#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileHomingComponentEventDelegate.h"
#include "ProjectileHomingComponent.generated.h"

class AActor;
class UProjectileMovementComponent;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UProjectileHomingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoveDirectlyToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bChangeTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FinalTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TrueTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TrueTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideHomingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelerationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    AActor* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated)
    USceneComponent* HomingTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FName HomingSocketOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FVector HomingTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReachDistance;
    
    UPROPERTY()
    float ReachDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HomingTargetLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StopHomingDistance;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileHomingComponentEvent OnStopHomingDistanceReached;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileHomingComponentEvent OnReachedTargetLocation;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    bool bHomeIn;
    
    UPROPERTY(Export, Transient)
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(Transient)
    AActor* Projectile;
    
    UPROPERTY()
    bool bModifyDefault;
    
public:
    UProjectileHomingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleHoming();
    
    UFUNCTION(BlueprintCallable)
    void SetHomeIn(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedProjectileMovement(UProjectileMovementComponent* ProjectileMovementComponent);
    
    UFUNCTION(BlueprintCallable)
    FVector GetHomingLocation();
    
};

