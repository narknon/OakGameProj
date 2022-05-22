#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OakMissionActorComponent.generated.h"

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakMissionActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOakMissionActorComponent();
};

