#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OakAutomationActorComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakAutomationActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOakAutomationActorComponent();
};

