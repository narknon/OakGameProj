#pragma once
#include "CoreMinimal.h"
#include "ESkillScreenItemPurchaseState.generated.h"

UENUM(BlueprintType)
enum class ESkillScreenItemPurchaseState : uint8 {
    CannotPurchase,
    FirstPoint,
    AddPoints,
    MaxPoints,
};

