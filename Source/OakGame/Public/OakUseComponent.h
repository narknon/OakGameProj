#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "PickupEvaluationResult.h"
#include "TouchPickupEvaluationResult.h"
#include "EUsabilityType.h"
#include "OakUseComponent.generated.h"

class AOakInventoryItemPickup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float PickupInteractionDistance;
    
    UPROPERTY(EditAnywhere)
    float TouchPickupInteractDistance;
    
    UPROPERTY(EditAnywhere)
    float VehicleTouchPickupInteractDistance;
    
private:
    UPROPERTY(Transient)
    AOakInventoryItemPickup* CurrentlySelectedPickup;
    
    UPROPERTY(Transient)
    FPickupEvaluationResult LastPickupResult;
    
    UPROPERTY(Transient)
    FTouchPickupEvaluationResult LastTouchPickupResult;
    
public:
    UOakUseComponent();
    UFUNCTION(BlueprintPure)
    bool CanRouteInputToCurrentUsable(EUsabilityType Type) const;
    
};

