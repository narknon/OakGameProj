#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "OakTouchedTriggerDelegateDelegate.h"
#include "OakUnTouchedTriggerDelegateDelegate.h"
#include "OakTriggerCapsule.generated.h"

class UOakTriggerComponent;
class AActor;

UCLASS()
class OAKGAME_API AOakTriggerCapsule : public ATriggerCapsule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakTriggerComponent* TriggerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOakTouchedTriggerDelegate TouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakUnTouchedTriggerDelegate UnTouchedTrigger;
    
    AOakTriggerCapsule();
    UFUNCTION()
    void NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer);
    
    UFUNCTION()
    void NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer);
    
};

