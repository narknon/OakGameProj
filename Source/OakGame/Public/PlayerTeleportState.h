#pragma once
#include "CoreMinimal.h"
#include "PlayerTeleportState.generated.h"

class UOakPlayerTeleportData;

USTRUCT()
struct FPlayerTeleportState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UOakPlayerTeleportData* TeleportData;
    
    OAKGAME_API FPlayerTeleportState();
};

