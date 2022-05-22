#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "GameplayTask_ScriptedMoveToLevelSequence.generated.h"

class UGameplayTask_ScriptedMoveToLevelSequence;
class AGbxLevelSequenceActor;
class AActor;
class UStanceDataProvider;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedMoveToLevelSequence : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedMoveDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedMoveActorsDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskScriptedMoveActorDelegate, AActor*, Actor);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveActorDelegate OnActorArrived;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveActorDelegate OnActorFailedToArrive;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnAllActorsArrived;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnFailed;
    
private:
    UPROPERTY()
    AGbxLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY()
    UStanceDataProvider* StanceProvider;
    
public:
    UGameplayTask_ScriptedMoveToLevelSequence();
private:
    UFUNCTION()
    void OnLevelSequenceStopped();
    
    UFUNCTION()
    void OnLevelSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedMoveToLevelSequence* BeginScriptedMoveToLevelSequenceMulti(const TArray<AActor*>& Targets, AGbxLevelSequenceActor* NewLevelSequenceActor, bool bStartSequence, UStanceDataProvider* OptionalStance);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedMoveToLevelSequence* BeginScriptedMoveToLevelSequence(AActor* Target, AGbxLevelSequenceActor* NewLevelSequenceActor, bool bStartSequence, UStanceDataProvider* OptionalStance);
    
};

