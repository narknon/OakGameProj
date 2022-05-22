#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "RecentlyMetPlayer.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRecentlyMetPlayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUniqueNetIdRepl FirstPartyPlayerId;
    
    UPROPERTY()
    FUniqueNetIdRepl ShiftPlayerId;
    
    UPROPERTY()
    bool bUseShiftId;
    
    FRecentlyMetPlayer();
};

