#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "EScriptedActionRule.h"
#include "GameplayTask_ScriptedMove.generated.h"

class AAIController;
class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedMove;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedMove : public UGameplayTask_ScriptedAction {
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
    
    UPROPERTY()
    AActor* LookAtActor;
    
    UPROPERTY()
    bool bTeleportOnFail;
    
public:
    UGameplayTask_ScriptedMove();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedMove* BeginScriptedMoveActor(AAIController* Target, AActor* StartNode, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedMove* BeginScriptedMove2(AActor* User, AActor* StartAINode, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedMove* BeginScriptedMove(AActor* Target, AActor* StartNode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor, bool NewBTeleportOnFail);
    
};

