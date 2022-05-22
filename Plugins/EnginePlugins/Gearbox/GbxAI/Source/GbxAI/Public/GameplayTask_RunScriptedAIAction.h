#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask.h"
#include "RunScriptedAIActionTaskEndedDelegateDelegate.h"
#include "GameplayTask_RunScriptedAIAction.generated.h"

class AActor;
class UAIActionComponent;
class UObject;
class UGameplayTask_RunScriptedAIAction;
class UAIAction;
class AGbxAIController;

UCLASS()
class GBXAI_API UGameplayTask_RunScriptedAIAction : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UAIActionComponent* ActionComponent;
    
    UPROPERTY()
    TSubclassOf<UAIAction> ActionToRun;
    
    UPROPERTY(BlueprintAssignable)
    FRunScriptedAIActionTaskEndedDelegate Succeeded;
    
    UPROPERTY(BlueprintAssignable)
    FRunScriptedAIActionTaskEndedDelegate Failed;
    
    UPROPERTY(BlueprintAssignable)
    FRunScriptedAIActionTaskEndedDelegate Aborted;
    
    UGameplayTask_RunScriptedAIAction();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_Object(UObject* Object, TSubclassOf<UAIAction> Action);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_Controller(AGbxAIController* Controller, TSubclassOf<UAIAction> Action);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_AIActionComponent(UAIActionComponent* AIActionComponent, TSubclassOf<UAIAction> Action);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_Actor(AActor* Actor, TSubclassOf<UAIAction> Action);
    
};

