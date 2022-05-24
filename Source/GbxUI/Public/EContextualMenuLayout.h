#pragma once
#include "CoreMinimal.h"
#include "EContextualMenuLayout.generated.h"

UENUM(BlueprintType)
enum class EContextualMenuLayout : uint8 {
    RosterMenu,
    MailMenuSendTo,
    MailMenuRecieved,
};

