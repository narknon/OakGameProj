#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "OakUseTriggerDelegateDelegate.h"
#include "OakUseTrigger.generated.h"

class UUsableComponent;
class AController;

UCLASS()
class OAKGAME_API AOakUseTrigger : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOakUseTriggerDelegate OnUsedTrigger;
    
    AOakUseTrigger();
    UFUNCTION()
    void NotifyTriggerUsed(AController* UsingActor);
    
};

