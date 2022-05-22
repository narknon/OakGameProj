#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OakTriggerKillIronBearComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakTriggerKillIronBearComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOakTriggerKillIronBearComponent();
protected:
    UFUNCTION()
    void OwnerTriggerTouched(AActor* TouchingActor, bool bIsPlayer, UActorComponent* ComponentTouched);
    
};

