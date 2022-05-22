#pragma once
#include "CoreMinimal.h"
#include "PlayerTouchedButNotAllTouchingDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerTouchedButNotAllTouchingDelegate, AActor*, NewPlayer, int32, NumPlayersMissing);

