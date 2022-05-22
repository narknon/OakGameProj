#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGbxActionEndState.h"
#include "ActionComponentStopDelegateDelegate.generated.h"

class UGbxAction;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionComponentStopDelegate, TSubclassOf<UGbxAction>, Action, EGbxActionEndState, EndState);

