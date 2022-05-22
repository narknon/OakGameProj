#pragma once
#include "CoreMinimal.h"
#include "EnvQueryParams.h"
#include "SmartObjectUsageResultEventDelegate.h"
#include "Components/ActorComponent.h"
#include "GbxParam.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxBlueprintActionInterface -FallbackName=GbxBlueprintActionInterface
#include "SmartObjectUsageEventDelegate.h"
#include "InspectionInfoProvider.h"
#include "ESmartObjectLookAtRule.h"
#include "SmartObjectActionState.h"
#include "SmartObjectActionSet.h"
#include "EGbxActionEndState.h"
#include "GameplayTagContainer.h"
#include "SmartObjectComponent.generated.h"

class UAIUseSlotComponent;
class AController;
class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API USmartObjectComponent : public UActorComponent, public IGbxBlueprintActionInterface, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSmartObjectUsageEvent OnActionReserved;
    
    UPROPERTY(BlueprintAssignable)
    FSmartObjectUsageEvent OnActionUsageBegan;
    
    UPROPERTY(BlueprintAssignable)
    FSmartObjectUsageEvent OnObjectActionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FSmartObjectUsageResultEvent OnActionUsageEnded;
    
    UPROPERTY(EditAnywhere)
    bool bUseInRoutes;
    
    UPROPERTY(EditAnywhere)
    ESmartObjectLookAtRule LookAtRule;
    
    UPROPERTY(EditAnywhere)
    FName LookAtSocket;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UseLookAtQuery;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LookAtQueryDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LookAtQueryForgetDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LookAtQueryPeriod;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams LookAtQuery;
    
    UPROPERTY(EditAnywhere)
    TArray<FSmartObjectActionState> Actions;
    
    UPROPERTY(Export, Transient)
    TArray<UAIUseSlotComponent*> UseSlots;
    
    USmartObjectComponent();
    UFUNCTION()
    void UnreserveEventSignature(APawn* User);
    
    UFUNCTION(BlueprintCallable)
    void ToggleActionSet(FSmartObjectActionSet ActionSet);
    
    UFUNCTION()
    void SuccessEventSignature(APawn* User);
    
    UFUNCTION()
    void ReserveEventSignature(APawn* User);
    
private:
    UFUNCTION()
    void OnActionEnded(EGbxActionEndState EndState, FGameplayTag ActionName, AController* User);
    
public:
    UFUNCTION()
    void InterruptEventSignature(APawn* User);
    
private:
    UFUNCTION()
    void GetAvailableSocketNames(TArray<FName>& Array) const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetActionUsers(FGameplayTag ActionTag, TArray<APawn*>& OutUsers) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAllActions();
    
    UFUNCTION(BlueprintCallable)
    void EnableAction(FGameplayTag ActionTag);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllActions();
    
    UFUNCTION(BlueprintCallable)
    void DisableAction(FGameplayTag ActionTag);
    
    UFUNCTION()
    void BeginEventSignature(APawn* User);
    
    
    // Fix for true pure virtual functions not being implemented
};

