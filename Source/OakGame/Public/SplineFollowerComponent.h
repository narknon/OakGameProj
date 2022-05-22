#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "SplineFollowerDistanceCheckpoint.h"
#include "SplineFollowerEventDelegate.h"
#include "SplineFollowerReachedDistanceEventDelegate.h"
#include "SplineFollowerComponent.generated.h"

class USplineComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineFollowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSplineFollowerEvent OnReachedEndOfSpline;
    
    UPROPERTY(BlueprintAssignable)
    FSplineFollowerEvent OnReachedCallbackInputKey;
    
    UPROPERTY(BlueprintAssignable)
    FSplineFollowerReachedDistanceEvent OnReachedCallbackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CallbackInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSplineFollowerDistanceCheckpoint> CallbackDistancesOnSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bUseMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnRate;
    
    UPROPERTY(EditAnywhere)
    bool bAutoStart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ForwardLookUpDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float OnSplineDistanceDelta;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float OnSplineYawDelta;
    
private:
    UPROPERTY(EditAnywhere, Export, ReplicatedUsing=OnRep_SplineComponent)
    USplineComponent* SplineComponent;
    
    UPROPERTY(Replicated)
    float CurrentSpeed;
    
    UPROPERTY(Replicated)
    float CurrentDistanceOnSpline;
    
    UPROPERTY(Replicated)
    bool bMoving;
    
    UPROPERTY(Replicated)
    bool bOnSpline;
    
    UPROPERTY(Replicated)
    bool bReverse;
    
public:
    USplineFollowerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TelportToPositionOnSpline(float Percent);
    
    UFUNCTION(BlueprintCallable)
    bool Stop();
    
    UFUNCTION(BlueprintCallable)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SnapToSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetSplineComponent(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable)
    void SetDirection(bool bSetReverse);
    
    UFUNCTION()
    void OnRep_SplineComponent();
    
    UFUNCTION(BlueprintCallable)
    bool IsMoving();
    
    UFUNCTION(BlueprintPure)
    USplineComponent* GetSplineComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAhead(float AheadDistance) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDirection();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentDistanceOnSpline() const;
    
};

