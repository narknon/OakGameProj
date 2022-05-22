#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "OakTouchedTriggerDelegateDelegate.h"
#include "OakUnTouchedTriggerDelegateDelegate.h"
#include "OakTriggerSphere.generated.h"

class UOakTriggerComponent;
class AActor;

UCLASS()
class OAKGAME_API AOakTriggerSphere : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakTriggerComponent* TriggerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOakTouchedTriggerDelegate TouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakUnTouchedTriggerDelegate UnTouchedTrigger;
    
    AOakTriggerSphere();
    UFUNCTION()
    void NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer);
    
    UFUNCTION()
    void NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer);
    
};

