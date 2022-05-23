#pragma once
#include "CoreMinimal.h"
#include "ECameraAttachState.generated.h"

UENUM(BlueprintType)
enum class ECameraAttachState :  {
    CAS_Dettached,
    CAS_Attached,
    CAS_MAX UMETA(Hidden),
};

