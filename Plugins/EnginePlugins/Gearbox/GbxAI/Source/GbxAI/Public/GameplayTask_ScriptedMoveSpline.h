#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask_ScriptedAction.h"
#include "EScriptedActionRule.h"
#include "GameplayTask_ScriptedMoveSpline.generated.h"

class AActor;
class USplineComponent;
class UStanceDataProvider;
class UGameplayTask_ScriptedMoveSpline;
class AGbxSpawner;
class UAIAction;

UCLASS()
class GBXAI_API UGameplayTask_ScriptedMoveSpline : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskScriptedMoveDelegate, AActor*, Targeted);
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnAborted;
    
    UPROPERTY(BlueprintAssignable)
    FTaskScriptedMoveDelegate OnCompleted;
    
    UPROPERTY()
    AActor* Target;
    
private:
    UPROPERTY(Export)
    USplineComponent* SplineComponent;
    
    UPROPERTY()
    UStanceDataProvider* StanceProvider;
    
    UPROPERTY()
    AActor* LookAtActor;
    
    UPROPERTY()
    TSubclassOf<UAIAction> OptionalAIAction;
    
    UPROPERTY()
    AGbxSpawner* DropOffSpawner;
    
    UPROPERTY()
    AActor* NextSpline;
    
public:
    UGameplayTask_ScriptedMoveSpline();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_ScriptedMoveSpline* BeginScriptedMoveOnSpline(AActor* NewTarget, AActor* StartSpline, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, UStanceDataProvider* OptionalStance, AActor* OptionalLookAtActor, TSubclassOf<UAIAction> NewOptionalAIAction);
    
};

