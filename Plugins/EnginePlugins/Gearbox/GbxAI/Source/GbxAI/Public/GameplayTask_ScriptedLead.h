#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "GameplayTask_ScriptedLead.generated.h"

class UGameplayTask_ScriptedLead;
class AActor;
class UStanceDataProvider;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedLead : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedLeadDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedLeadDelegate OnAborted;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedLeadDelegate OnCompleted;
    
private:
    UPROPERTY()
    AActor* DestNode;
    
    UPROPERTY()
    AActor* ActorToLead;
    
    UPROPERTY()
    UStanceDataProvider* StanceProvider;
    
public:
    UGameplayTask_ScriptedLead();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedLead* BeginScriptedLead(AActor* Leader, AActor* DestAINode, AActor* NewActorToLead, UStanceDataProvider* OptionalStance);
    
};

