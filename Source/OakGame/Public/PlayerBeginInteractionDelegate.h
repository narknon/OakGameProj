#pragma once
#include "CoreMinimal.h"
#include "PlayerBeginInteractionDelegate.generated.h"

class AOakPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerBeginInteraction, AOakPlayerController*, InteractingPlayer);

