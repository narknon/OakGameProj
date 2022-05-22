#pragma once
#include "CoreMinimal.h"
#include "EMenuTransition.h"
#include "MenuTransitionOutCompletedDelegate.generated.h"

class UGbxMenuData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMenuTransitionOutCompleted, EMenuTransition, MenuTransitionType, UGbxMenuData*, NextMenuData);

