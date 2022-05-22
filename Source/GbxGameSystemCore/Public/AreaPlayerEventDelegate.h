#pragma once
#include "CoreMinimal.h"
#include "AreaPlayerEventDelegate.generated.h"

class AGbxPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAreaPlayerEvent, AGbxPlayerController*, Player);

