#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ResourceLock.h"
#include "UsabilityInfo.h"
#include "EUsabilityType.h"
#include "UObject/NoExportTypes.h"
#include "UsableCostCache.h"
#include "UseTraceResult.h"
#include "LatentUseState.h"
#include "UseComponent.generated.h"

class UUsableComponent;
class AController;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnUsableChanged, UUsableComponent*, NewUsableComponent, const FUsabilityInfo&, InUsabilityInfo, FVector, NewUsableComponentImpactPoint, float, NewUsableComponentDistanceAway);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUsabilityChanged, UUsableComponent*, NewUsableComponent, const FUsabilityInfo&, InUsabilityInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUnableToAffordUsableObject, UUsableComponent*, Usable, EUsabilityType, UseType, bool, bUseHeld);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnImpactDataChanged, UUsableComponent*, NewUsableComponent, FVector, NewUsableComponentImpactPoint, float, NewUsableComponentDistanceAway);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHoldUseStopped);
    
    UPROPERTY(BlueprintAssignable)
    FOnUsableChanged UsableChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDataChanged ImpactDataChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnUsabilityChanged UsabilityChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnHoldUseStopped OnHoldUseStopped;
    
    UPROPERTY(EditAnywhere)
    float ViewDistance;
    
    UPROPERTY(EditAnywhere)
    float InteractDistance;
    
    UPROPERTY(EditAnywhere)
    float LeaveInteractionDistance;
    
    UPROPERTY(EditAnywhere)
    float VehicleInteractDistance;
    
    UPROPERTY(EditAnywhere)
    float VehicleLeaveInteractionDistance;
    
protected:
    UPROPERTY(Transient)
    AController* CachedController;
    
    UPROPERTY(Transient)
    FUseTraceResult PreviousUsableState;
    
    UPROPERTY(Replicated, Transient)
    FUseTraceResult ReplicatedUsableState;
    
    UPROPERTY(Transient)
    FUseTraceResult LocalUsableState;
    
    UPROPERTY(Transient)
    FUseTraceResult EmptyUsableState;
    
    UPROPERTY(Transient)
    FLatentUseState LatentUseStates[2];
    
    UPROPERTY(Replicated, Transient)
    FUsableCostCache ReplicatedCostCache;
    
    UPROPERTY(Replicated, Transient)
    FResourceLock CanUseObjectsLock_Replicated;
    
public:
    UUseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopUsingCurrentObject(EUsabilityType UseType);
    
    UFUNCTION(BlueprintCallable)
    void StartUsingCurrentObject(EUsabilityType UseType);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUseObject(UUsableComponent* UsableObject, EUsabilityType UseType, bool bHeld);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopUsingObject(UUsableComponent* UsableObject, EUsabilityType UseType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartUsingObject(UUsableComponent* UsableObject, EUsabilityType UseType);
    
public:
    UFUNCTION(BlueprintPure)
    UUsableComponent* GetCurrentUsable() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUsingObject(UUsableComponent* UsableObject);
    
private:
    UFUNCTION(Client, Unreliable)
    void ClientNotifyAttemptedUseCouldNotAfford(UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanUseCurrentUsable(EUsabilityType Type) const;
    
    UFUNCTION(BlueprintPure)
    bool CanInteractWithCurrentUsable(EUsabilityType Type) const;
    
};

