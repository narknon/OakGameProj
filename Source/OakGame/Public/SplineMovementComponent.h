#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "SplineMovementComponent.generated.h"

class AActor;
class USplineComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly, ReplicatedUsing=OnRep_SplineComponentHolder)
    AActor* SplineComponentHolder;
    
    UPROPERTY(EditInstanceOnly)
    FName SplineComponentNameSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelerationAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SleepThresholdMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SleepThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreCollisionWhenMoving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetFromSpline;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float VelocityCurrent;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Impulse)
    float ImpulseThisFrameAccumulator;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentDistanceAlongSpline;
    
private:
    UPROPERTY(Replicated)
    float TimeWithinSleepThreshold;
    
public:
    USplineMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SwitchSpline(AActor* NewSplineComponentHolder, FName NewSplineName);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingDistanceOnSpline(float DistanceOnSpline);
    
    UFUNCTION()
    void OnRep_SplineComponentHolder();
    
    UFUNCTION()
    void OnRep_Impulse();
    
    UFUNCTION(BlueprintCallable)
    USplineComponent* GetSplineComponent();
    
};

