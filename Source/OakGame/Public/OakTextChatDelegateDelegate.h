#pragma once
#include "CoreMinimal.h"
#include "OakTextChatDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakTextChatDelegate, bool, bIsActive);

