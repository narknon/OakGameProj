#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "OakRadiateDamageMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakRadiateDamageMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UOakRadiateDamageMovementComponent();
};

