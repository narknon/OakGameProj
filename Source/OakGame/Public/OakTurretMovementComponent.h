#pragma once
#include "CoreMinimal.h"
#include "TurretMovementComponent.h"
#include "OakTurretMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakTurretMovementComponent : public UTurretMovementComponent {
    GENERATED_BODY()
public:
    UOakTurretMovementComponent();
};

