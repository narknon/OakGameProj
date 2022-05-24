#pragma once
#include "CoreMinimal.h"
#include "EOakMessageType.generated.h"

UENUM()
enum class EOakMessageType : int32 {
    MessageType_PlayerJoined = 0x1,
    MessageType_PlayerChangedName,
    MessageType_PlayerLeft = 0x4,
    MessageType_PlayerUnableToJoin = 0x7,
    MessageType_SpectatorJoined = 0x10,
    MessageType_MAX UMETA(Hidden),
};

