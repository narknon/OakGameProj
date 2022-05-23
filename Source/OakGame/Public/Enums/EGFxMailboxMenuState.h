#pragma once
#include "CoreMinimal.h"
#include "EGFxMailboxMenuState.generated.h"

UENUM(BlueprintType)
enum class EGFxMailboxMenuState :  {
    None,
    Receive,
    Send_ChooseItem,
    Send_ChooseFriend,
    Send_Confirm,
};

