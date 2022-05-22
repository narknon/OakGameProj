#pragma once
#include "CoreMinimal.h"
#include "EVaJson.generated.h"

UENUM(BlueprintType)
namespace EVaJson {
    enum Type {
        None,
        Null,
        String,
        Number,
        Boolean,
        Array,
        Object,
    };
}

