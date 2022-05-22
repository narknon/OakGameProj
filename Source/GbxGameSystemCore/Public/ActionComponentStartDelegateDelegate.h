#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActionComponentStartDelegateDelegate.generated.h"

class UGbxAction;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionComponentStartDelegate, TSubclassOf<UGbxAction>, Action);

