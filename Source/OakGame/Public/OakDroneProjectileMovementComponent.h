#pragma once
#include "CoreMinimal.h"
#include "GbxProjectileMovementComponent.h"
#include "EOakDroneFacingMode.h"
#include "EOakDroneMovementMode.h"
#include "NumericRange.h"
#include "OakDroneProjectileFacingTargetChangedDelegateDelegate.h"
#include "EnvQueryParams.h"
#include "UObject/NoExportTypes.h"
#include "OakDroneProjectileMovementComponent.generated.h"

class AOakDroneProjectile;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakDroneProjectileMovementComponent : public UGbxProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakDroneProjectile* Drone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MovementMode)
    EOakDroneMovementMode MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    EOakDroneFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    float RotationInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bDeactiveWhenMovementTargetDies;
    
    UPROPERTY(EditAnywhere)
    bool bDeactivateWhenInstigatorDies;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* MovementTarget;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* FacingTarget;
    
    UPROPERTY(BlueprintAssignable)
    FOakDroneProjectileFacingTargetChangedDelegate FacingTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float DroneSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HoverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float DroneAccelerationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HoverAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HoverAltitudeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HoverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HoverRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FNumericRange HoverAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bUseHoverAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float StopHomingDistance;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams HoverQuery;
    
    UPROPERTY(EditAnywhere)
    bool bUseHoverQuery;
    
    UPROPERTY(Replicated, Transient)
    FVector HoverQueryLocation;
    
    UOakDroneProjectileMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMovementTarget(AActor* NewMovementTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(EOakDroneMovementMode NewMovementMode, AActor* NewMovementTarget);
    
private:
    UFUNCTION()
    void OnRep_MovementMode();
    
};

