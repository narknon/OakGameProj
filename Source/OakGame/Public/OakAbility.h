#pragma once
#include "CoreMinimal.h"
#include "GbxAbility.h"
#include "OakAbilityTimer.h"
#include "OakAbilityTimerSpec.h"
#include "OakAbilityTimerResult.h"
#include "OakAbility.generated.h"

class UOakAbilityTimerData;

UCLASS()
class UOakAbility : public UGbxAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FOakAbilityTimer> AbilityTimers;
    
public:
    UOakAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void StopTimer(UOakAbilityTimerData* Timer);
    
    UFUNCTION(BlueprintCallable)
    void StopAbilityTimer(UOakAbilityTimerData* Timer);
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(const FOakAbilityTimerSpec& InSpec);
    
    UFUNCTION(BlueprintCallable)
    void StartAbilityTimer(const FOakAbilityTimerSpec& InSpec);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimer(UOakAbilityTimerData* Timer);
    
    UFUNCTION(BlueprintCallable)
    void ResetAbilityTimer(UOakAbilityTimerData* Timer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTimerStopped(const FOakAbilityTimerSpec& Spec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTimerStarted(const FOakAbilityTimerSpec& Spec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTimerFinished(const FOakAbilityTimerSpec& Spec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAbilityTimerStarted(const FOakAbilityTimerSpec& Spec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAbilityTimerEnded(const FOakAbilityTimerSpec& Spec, const FOakAbilityTimerResult& Result);
    
    UFUNCTION(BlueprintPure)
    bool IsTimerActive(UOakAbilityTimerData* TimerData) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAbilityTimerActive(UOakAbilityTimerData* TimerData) const;
    
    UFUNCTION(BlueprintPure)
    float GetAbilityTimerValue(UOakAbilityTimerData* Timer) const;
    
};

