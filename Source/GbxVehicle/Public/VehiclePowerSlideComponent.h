#pragma once
#include "CoreMinimal.h"
#include "EInAirBehavior.h"
#include "Components/ActorComponent.h"
#include "PowerSlideEventDelegate.h"
#include "OnStartPowerSlideBoostEventDelegate.h"
#include "Curves/CurveFloat.h"
#include "RelativeDirectionData.h"
#include "VehiclePowerSlideComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehiclePowerSlideComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bApplyHandbrake;
    
    UPROPERTY(EditAnywhere)
    EInAirBehavior InAirBehavior;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumWheelsInAir;
    
    UPROPERTY(BlueprintAssignable)
    FPowerSlideEvent OnStartPowerSlide;
    
    UPROPERTY(BlueprintAssignable)
    FPowerSlideEvent OnEndPowerSlide;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartPowerSlideBoostEvent OnStartPowerSlideBoost;
    
    UPROPERTY(BlueprintAssignable)
    FPowerSlideEvent OnEndPowerSlideBoost;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsPowerSliding)
    bool bIsPowerSliding;
    
    UPROPERTY(EditAnywhere)
    float AngleToConsiderDrift;
    
    UPROPERTY(EditAnywhere)
    float MinDriftVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float TimeInDriftDecayRate;
    
    UPROPERTY(EditAnywhere)
    float MinDriftDurationForBoost;
    
    UPROPERTY(EditAnywhere)
    float MaxDriftDurationForBoost;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve BoostCurve;
    
    UPROPERTY(EditAnywhere)
    float MaxBoostForce;
    
    UPROPERTY(EditAnywhere)
    float PostDriftBoostDurationMin;
    
    UPROPERTY(EditAnywhere)
    float PostDriftBoostDurationMax;
    
    UPROPERTY(EditAnywhere)
    float MinVelForPostDriftBoost;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData BoostDirection;
    
public:
    UVehiclePowerSlideComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPowerSlideEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResumePowerSlide(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void PausePowerSlide(FName Reason);
    
private:
    UFUNCTION()
    void OnRep_IsPowerSliding(bool bWasPowerSliding);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPowerSlidePaused();
    
    UFUNCTION(BlueprintPure)
    bool IsInPowerSlideBoost() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPowerSlideEnabled();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBoostRatio() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelPowerSlide();
    
};

