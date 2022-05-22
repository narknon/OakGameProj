#pragma once
#include "CoreMinimal.h"
#include "GameplayTask_ScriptedAction.h"
#include "SmartActionInfoContext.h"
#include "GameplayTagContainer.h"
#include "GameplayTask_SmartAction.generated.h"

class AActor;
class UGameplayTask_SmartAction;

UCLASS(MinimalAPI)
class UGameplayTask_SmartAction : public UGameplayTask_ScriptedAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAITaskEvent);
    
    UPROPERTY(BlueprintAssignable)
    FAITaskEvent OnReserve;
    
    UPROPERTY(BlueprintAssignable)
    FAITaskEvent OnUnreserve;
    
    UPROPERTY(BlueprintAssignable)
    FAITaskEvent OnBegin;
    
    UPROPERTY(BlueprintAssignable)
    FAITaskEvent OnInterrupt;
    
    UPROPERTY(BlueprintAssignable)
    FAITaskEvent OnSuccess;
    
private:
    UPROPERTY()
    FSmartActionInfoContext Action;
    
public:
    UGameplayTask_SmartAction();
private:
    UFUNCTION()
    void UnreserveCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag);
    
    UFUNCTION()
    void SuccessCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag);
    
    UFUNCTION()
    void ReserveCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag);
    
    UFUNCTION()
    void InterruptCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag);
    
public:
    UFUNCTION(BlueprintCallable)
    static void EndSmartAction(AActor* User);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_SmartAction* BeginSmartAction(AActor* User, AActor* SmartObject, FGameplayTag ActionTag);
    
private:
    UFUNCTION()
    void BeginCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag);
    
};

