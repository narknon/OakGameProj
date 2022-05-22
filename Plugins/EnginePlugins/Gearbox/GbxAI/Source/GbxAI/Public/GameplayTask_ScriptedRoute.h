#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "EScriptedActionRule.h"
#include "GameplayTask_ScriptedRoute.generated.h"

class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedRoute;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedRoute : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedMoveDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnAborted;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnCompleted;
    
private:
    UPROPERTY()
    AActor* AINode;
    
    UPROPERTY()
    UStanceDataProvider* StanceProvider;
    
public:
    UGameplayTask_ScriptedRoute();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedRoute* BeginScriptedRoute2(AActor* Target, AActor* FirstAINode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, UStanceDataProvider* OptionalStance);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedRoute* BeginScriptedRoute(AActor* User, AActor* FirstAINode, UStanceDataProvider* OptionalStance);
    
};

