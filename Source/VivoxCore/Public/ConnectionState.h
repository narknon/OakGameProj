#pragma once
#include "CoreMinimal.h"
#include "ConnectionState.generated.h"

UENUM(BlueprintType)
enum class ConnectionState :  {
    Disconnected,
    Connecting,
    Connected,
    Disconnecting,
};

