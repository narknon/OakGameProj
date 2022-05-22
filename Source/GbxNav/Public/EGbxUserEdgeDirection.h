#pragma once
#include "CoreMinimal.h"
#include "EGbxUserEdgeDirection.generated.h"

UENUM(BlueprintType)
enum class EGbxUserEdgeDirection : uint8 {
    Blocked,
    AToB,
    BToA,
    Bidirectional,
};

