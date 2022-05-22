#pragma once
#include "CoreMinimal.h"
#include "PlayerStopInteractionDelegate.generated.h"

class AOakPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStopInteraction, AOakPlayerController*, InteractingPlayer);

