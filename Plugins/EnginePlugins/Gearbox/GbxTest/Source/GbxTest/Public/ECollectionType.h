#pragma once
#include "CoreMinimal.h"
#include "ECollectionType.generated.h"

UENUM(BlueprintType)
enum ECollectionType {
    ECT_System,
    ECT_Local,
    ECT_Private,
    ECT_Shared,
    ECT_MAX UMETA(Hidden),
};

