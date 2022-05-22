#pragma once
#include "CoreMinimal.h"
#include "ECohtmlGamepadBehaviourOnFocusLost.generated.h"

UENUM(BlueprintType)
enum ECohtmlGamepadBehaviourOnFocusLost {
    CohtmlResetState,
    CohtmlUseCurrentState,
    CohtmlUseStateBeforeReset,
};

