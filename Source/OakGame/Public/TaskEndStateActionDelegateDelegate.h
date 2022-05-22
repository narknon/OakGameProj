#pragma once
#include "CoreMinimal.h"
#include "EGbxActionEndState.h"
#include "TaskEndStateActionDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTaskEndStateActionDelegate, EGbxActionEndState, EndState, AActor*, Actor);

