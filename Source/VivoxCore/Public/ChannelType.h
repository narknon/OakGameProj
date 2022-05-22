#pragma once
#include "CoreMinimal.h"
#include "ChannelType.generated.h"

UENUM(BlueprintType)
enum class ChannelType :  {
    NonPositional,
    Positional,
    Echo,
};

