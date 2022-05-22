#pragma once
#include "CoreMinimal.h"
#include "EGFxMailboxMenuMailSort.generated.h"

UENUM(BlueprintType)
enum class EGFxMailboxMenuMailSort :  {
    Date,
    Unread,
    Friend,
    System,
};

