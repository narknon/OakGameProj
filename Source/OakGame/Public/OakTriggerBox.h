#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "OakTouchedTriggerDelegateDelegate.h"
#include "OakUnTouchedTriggerDelegateDelegate.h"
#include "OakTriggerBox.generated.h"

class UOakTriggerComponent;
class AActor;

UCLASS()
class OAKGAME_API AOakTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakTriggerComponent* TriggerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOakTouchedTriggerDelegate TouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakUnTouchedTriggerDelegate UnTouchedTrigger;
    
    AOakTriggerBox();
    UFUNCTION()
    void NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer);
    
    UFUNCTION()
    void NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer);
    
};

