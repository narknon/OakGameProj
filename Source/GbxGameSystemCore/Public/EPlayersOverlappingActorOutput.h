#pragma once
#include "CoreMinimal.h"
#include "EPlayersOverlappingActorOutput.generated.h"

UENUM(BlueprintType)
enum class EPlayersOverlappingActorOutput : uint8 {
    Overlapping,
    NotOverlapping,
};

