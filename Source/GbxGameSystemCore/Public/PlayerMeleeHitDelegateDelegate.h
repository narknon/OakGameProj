#pragma once
#include "CoreMinimal.h"
#include "PlayerMeleeHitDelegateDelegate.generated.h"

class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerMeleeHitDelegate, AController*, InstigatedBy);

