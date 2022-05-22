#pragma once
#include "CoreMinimal.h"
#include "OnCinematicBrainEventDelegate.generated.h"

class UOakCinematicTag;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicBrainEvent, UOakCinematicTag*, CinematicTag);

