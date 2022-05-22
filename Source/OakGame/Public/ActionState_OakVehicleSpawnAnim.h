#pragma once
#include "CoreMinimal.h"
#include "ActionState_SpawnAnim.h"
#include "ActionState_OakVehicleSpawnAnim.generated.h"

USTRUCT()
struct OAKGAME_API FActionState_OakVehicleSpawnAnim : public FActionState_SpawnAnim {
    GENERATED_BODY()
public:
    FActionState_OakVehicleSpawnAnim();
};

