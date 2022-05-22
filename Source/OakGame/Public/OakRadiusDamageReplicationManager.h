#pragma once
#include "CoreMinimal.h"
#include "RadiusDamageReplicationManager.h"
#include "OakRadiusDamageReplicationManager.generated.h"

UCLASS(NonTransient)
class OAKGAME_API AOakRadiusDamageReplicationManager : public ARadiusDamageReplicationManager {
    GENERATED_BODY()
public:
    AOakRadiusDamageReplicationManager();
};

