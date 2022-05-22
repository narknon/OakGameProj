#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTask_ScriptedAction.generated.h"

class ASpawner;
class AGbxAIController;
class UAIAction;
class AActor;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedAction : public UGameplayTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AGbxAIController*> Controllers;
    
    UPROPERTY(Transient)
    TArray<AGbxAIController*> AbortingControllers;
    
    UPROPERTY(Transient)
    UAIAction* ScriptedAIAction;
    
public:
    UGameplayTask_ScriptedAction();
private:
    UFUNCTION()
    void OnActorSpawned(ASpawner* Spawner, AActor* Actor);
    
};

