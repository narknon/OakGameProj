#pragma once
#include "CoreMinimal.h"
#include "AIActionBlueprintContext.h"
#include "UObject/Object.h"
#include "EAIActionCreationMethod.h"
#include "EnvQueryParamsProvider.h"
#include "AIActionBlueprintDelegateDelegate.h"
#include "AIActionBlueprintResultDelegateDelegate.h"
#include "AIActionExecutionSettings.h"
#include "AIActionBase.generated.h"

class UAIActionBase;

UCLASS(Abstract, BlueprintType, CollapseCategories, EditInlineNew, HideDropdown, NotPlaceable)
class GBXAI_API UAIActionBase : public UObject, public IEnvQueryParamsProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintDelegate OnInitializeInstanceEventBP;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintDelegate OnCleanupInstanceEventBP;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintDelegate OnStartedEventBP;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintResultDelegate OnStoppedEventBP;
    
    UPROPERTY(EditAnywhere)
    FAIActionExecutionSettings ExecutionSettings;
    
private:
    UPROPERTY()
    uint8 BaseVersion;
    
protected:
    UPROPERTY()
    uint32 Version;
    
public:
    UPROPERTY()
    EAIActionCreationMethod CreationMethod;
    
    UAIActionBase();
    UFUNCTION(BlueprintCallable)
    static void StopBP(UAIActionBase* Action, const FAIActionBlueprintContext& Context, bool bSucceeded);
    
    UFUNCTION()
    UObject* CreateSubobjectNoName(UClass* Class);
    
    
    // Fix for true pure virtual functions not being implemented
};

