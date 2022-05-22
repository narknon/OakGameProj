#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "GameplayTask_ScriptedFollow.generated.h"

class AActor;
class UStanceDataProvider;
class UGameplayTask_ScriptedFollow;

UCLASS(MinimalAPI)
class UGameplayTask_ScriptedFollow : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskScriptedMoveDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnStopped;
    
private:
    UPROPERTY()
    AActor* ActorToFollow;
    
    UPROPERTY()
    UStanceDataProvider* StanceProvider;
    
public:
    UGameplayTask_ScriptedFollow();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedFollow* BeginScriptedFollow(AActor* Follower, AActor* NewActorToFollow, UStanceDataProvider* OptionalStance);
    
};

