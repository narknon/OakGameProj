#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingSearchParameterOp.generated.h"

UENUM(BlueprintType)
namespace EMatchmakingSearchParameterOp {
    enum Type {
        Invalid,
        Equals,
        NotEquals,
        GreaterThan,
        GreaterThanEquals,
        LessThan,
        LessThanEquals,
        Max,
    };
}

