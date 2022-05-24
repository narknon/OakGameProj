#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BrainComponent.h"
#include "AIActionInstance.h"
#include "EnvQueryParamsProvider.h"
#include "GameplayTagContainer.h"
#include "AIActionComponent.generated.h"

class UAIAction;
class UBlackboardData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAIActionComponent : public UBrainComponent, public IEnvQueryParamsProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> MainAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedMoveAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedMoveSplineAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedMoveToLevelSequenceAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedLookAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedWaitAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedUseAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedCoverAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedFollowAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedRouteAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedLeadAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ScriptedLandAction;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UAIAction>> TaggedActionTable;
    
    UPROPERTY(Transient)
    FAIActionInstance ActionStack[2];
    
public:
    UAIActionComponent();
    UFUNCTION(BlueprintCallable)
    void ReplaceMainAIAction(TSubclassOf<UAIAction> Action);
    
    UFUNCTION()
    UBlackboardData* GetBlackboardData() const;
    
    UFUNCTION(BlueprintCallable)
    void AbortScriptedAIAction(bool bStopImmediately);
    
    
    // Fix for true pure virtual functions not being implemented
};

