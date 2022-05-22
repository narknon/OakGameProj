#pragma once
#include "CoreMinimal.h"
#include "DeviceType.generated.h"

UENUM(BlueprintType)
enum class DeviceType :  {
    NullDevice,
    SpecificDevice,
    DefaultSystemDevice,
    DefaultCommunicationDevice,
};

