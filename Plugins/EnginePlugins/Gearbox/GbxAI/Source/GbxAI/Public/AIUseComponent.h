#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionCooldownInfo.h"
#include "SmartObjectUser.h"
#include "AIUsageEventDelegate.h"
#include "ActionUseState.h"
#include "GameplayTagContainer.h"
#include "ESmartObjectTaskResult.h"
#include "AIUseComponent.generated.h"

class AGbxAIController;
class APawn;
class AActor;
class UGbxActionComponent;
class UAITask;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAIUseComponent : public UActorComponent, public ISmartObjectUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAIUsageEvent ReserveEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAIUsageEvent UnreserveEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAIUsageEvent BeginEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAIUsageEvent InterruptEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAIUsageEvent SuccessEvent;
    
private:
    UPROPERTY(Transient)
    APawn* CachedPawn;
    
    UPROPERTY(Transient)
    AGbxAIController* CachedController;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* CachedActionComponent;
    
    UPROPERTY(Transient)
    FActionUseState UseState;
    
    UPROPERTY(Transient)
    bool bInitializingAction;
    
    UPROPERTY(Transient)
    TArray<FActionCooldownInfo> GlobalCooldowns;
    
public:
    UAIUseComponent();
    UFUNCTION(BlueprintCallable)
    void StopUse(bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUse(AActor* SmartObject, FGameplayTag ActionName, bool bAbortExisting, bool bUntilInterrupted);
    
private:
    UFUNCTION()
    void OnUseCompleted(UAITask* Task, ESmartObjectTaskResult Result);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentObject();
    
    
    // Fix for true pure virtual functions not being implemented
};

