#pragma once
#include "CoreMinimal.h"
#include "EGbxLookAxisOption.generated.h"

UENUM(BlueprintType)
namespace EGbxLookAxisOption {
    enum Type {
        X,
        Y,
        Z,
        X_Neg,
        Y_Neg,
        Z_Neg,
    };
}

