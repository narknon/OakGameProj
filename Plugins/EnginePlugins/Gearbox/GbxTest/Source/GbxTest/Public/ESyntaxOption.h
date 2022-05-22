#pragma once
#include "CoreMinimal.h"
#include "ESyntaxOption.generated.h"

UENUM(BlueprintType)
enum class ESyntaxOption : uint8 {
    E_ICASE,
    E_NOSUBS,
    E_OPTIMIZE,
    E_COLLATE,
    E_ECMASCRIPT,
    E_BASIC,
    E_EXTENDED,
    E_AWK,
    E_GREP,
    E_EGREP,
    E_MAX UMETA(Hidden),
};

