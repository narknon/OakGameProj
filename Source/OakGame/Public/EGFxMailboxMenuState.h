#pragma once
#include "CoreMinimal.h"
#include "EGFxMailboxMenuState.generated.h"

UENUM(BlueprintType)
enum class EGFxMailboxMenuState : uint8 {
    None,
    Receive,
    Send_ChooseItem,
    Send_ChooseFriend,
    Send_Confirm,
};

