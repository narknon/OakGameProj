#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointUseType.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointUseType : uint8 {
    Self,
    List,
    ManualGroup,
    ClusterGroup,
};

