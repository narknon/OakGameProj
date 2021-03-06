#pragma once
#include "CoreMinimal.h"
#include "OakTouchedTriggerDelegateDelegate.h"
#include "Engine/TriggerVolume.h"
#include "OakUnTouchedTriggerDelegateDelegate.h"
#include "OakTriggerDelegateDelegate.h"
#include "OakTriggerVolume.generated.h"

class UOakTriggerComponent;
class AActor;

UCLASS()
class OAKGAME_API AOakTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakTriggerComponent* TriggerComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOakTouchedTriggerDelegate TouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakUnTouchedTriggerDelegate UnTouchedTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FOakTriggerDelegate AllPlayersTouchingTrigger;
    
    AOakTriggerVolume();
protected:
    UFUNCTION()
    void NotifyTriggerUntouched(AActor* OtherActor, bool bIsPlayer);
    
    UFUNCTION()
    void NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer);
    
    UFUNCTION()
    void NotifyAllPlayersTouchingTrigger();
    
};

