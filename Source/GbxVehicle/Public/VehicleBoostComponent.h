#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VehicleBoostValueReachedEventDelegateDelegate.h"
#include "GameResourcePoolReference.h"
#include "UObject/NoExportTypes.h"
#include "VehicleBoostComponent.generated.h"

class AVehicle;
class UVehicleBoostData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleBoostComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVehicleBoostEvent);
    
    UPROPERTY(BlueprintAssignable)
    FVehicleBoostEvent OnBoostStarted;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleBoostEvent OnBoostStopped;
    
protected:
    UPROPERTY(EditAnywhere)
    UVehicleBoostData* BoostData;
    
    UPROPERTY(Transient)
    AVehicle* Vehicle;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsBoosting)
    bool bIsBoosting;
    
    UPROPERTY(Replicated, Transient)
    FGameResourcePoolReference BoostPool;
    
public:
    UVehicleBoostComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopBoost(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void StartBoost();
    
    UFUNCTION(BlueprintCallable)
    void ResumeBoost();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBoostRegenerateEvent(float BoostTarget, const FVehicleBoostValueReachedEventDelegate& BoostValueReachedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void PauseBoost();
    
protected:
    UFUNCTION()
    void OnRep_IsBoosting(bool bWasBoosting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_BoostStopped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_BoostStarted();
    
public:
    UFUNCTION(BlueprintPure)
    float GetRelativeBoostSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxBoostPoolValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBoostPoolValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentBoostChargesCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoostEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBoostDirection() const;
    
};

