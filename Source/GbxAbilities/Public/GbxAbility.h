#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxAbilityEffect.h"
#include "GbxAbilityEffectInstance.h"
#include "EGbxAbilityState.h"
#include "EGbxAbilityDurationType.h"
#include "GbxAbility.generated.h"

class UGbxAbilityManagerComponent;
class AActor;

UCLASS(Blueprintable)
class GBXABILITIES_API UGbxAbility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText AbilityName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText AbilityDescription;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxAbilityEffect> AbilityEffects;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, Transient, ReplicatedUsing=OnRep_Manager, meta=(AllowPrivateAccess=true))
    UGbxAbilityManagerComponent* Manager;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    EGbxAbilityDurationType DurationType;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(Transient)
    EGbxAbilityState DesiredAbilityState;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AbilityState, meta=(AllowPrivateAccess=true))
    EGbxAbilityState AbilityState;
    
    UPROPERTY(Transient)
    TArray<FGbxAbilityEffectInstance> AbilityEffectInstances;
    
    UPROPERTY(Export, Transient)
    UGbxAbilityManagerComponent* PendingManager;
    
public:
    UGbxAbility();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnUnregistered();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnResumed();
    
private:
    UFUNCTION()
    void OnRep_Manager();
    
    UFUNCTION()
    void OnRep_AbilityState();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnRegistered();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPaused();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnForcedRefresh();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDeactivated();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnActivated();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReplicated() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAbilityOwner() const;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_Deactivate();
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EGbxAbilityState CalculateAbilityState();
    
};

