#pragma once
#include "CoreMinimal.h"
#include "EGFxPlayerStorageMenuState.generated.h"

UENUM(BlueprintType)
enum class EGFxPlayerStorageMenuState : uint8 {
    None,
    BankRetrieve,
    BackpackDeposit,
    CompareBankFocused,
    CompareBackpackFocused,
};

