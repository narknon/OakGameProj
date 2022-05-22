#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "GameplayTask_ScriptedLand.generated.h"

class UGameplayTask_ScriptedLand;
class AActor;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedLand : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedLandDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedLandDelegate OnAborted;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedLandDelegate OnCompleted;
    
    UGameplayTask_ScriptedLand();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedLand* BeginScriptedLand(AActor* Lander);
    
};

