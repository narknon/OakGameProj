#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "CatchARideProxy.generated.h"

UCLASS(NonTransient)
class ACatchARideProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
    ACatchARideProxy();
    UFUNCTION(BlueprintNativeEvent)
    void OnTurnedOn();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTurnedOff();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartForceDeployed();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOwningPlayerInRangeCanUse();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOwningPlayerInRangeCannotUse();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInteractionPossible();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInteractionNotPossible();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndForceDeployed();
    
    UFUNCTION(BlueprintPure)
    bool CanBeUsedByAPlayerInRange() const;
    
};

