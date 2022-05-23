#pragma once
#include "CoreMinimal.h"
#include "ESkillScreenItemPurchaseState.generated.h"

UENUM(BlueprintType)
enum class ESkillScreenItemPurchaseState :  {
    CannotPurchase,
    FirstPoint,
    AddPoints,
    MaxPoints,
};

