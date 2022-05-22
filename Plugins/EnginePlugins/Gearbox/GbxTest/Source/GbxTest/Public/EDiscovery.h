#pragma once
#include "CoreMinimal.h"
#include "EDiscovery.generated.h"

UENUM(BlueprintType)
enum class EDiscovery : uint8 {
    Single,
    Ignore,
    AllContent,
    AllQAMaps,
    AllPersistentGameMaps,
    AllGameMissions,
    HierarchicalCommands,
    AllTraitContent,
    Custom,
    Count,
};

