#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxMovieGetChildStrategy.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxMovieGetChildStrategy : uint8 {
    Default,
    ByTable,
    ByTableThenPath,
    ByPath,
    ByPathThenTable,
    ByBreadthFirstSearch,
    ByDistributedSearch,
    TEST_CASE,
};

