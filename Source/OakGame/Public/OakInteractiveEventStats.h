#pragma once
#include "CoreMinimal.h"
#include "OakInteractiveEventStats.generated.h"

USTRUCT()
struct FOakInteractiveEventStats {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NbRareChestEvents;
    
    UPROPERTY()
    int32 RareChestEventWinners;
    
    UPROPERTY()
    int32 NbBadassEvents;
    
    UPROPERTY()
    int32 BadassViewersKilled;
    
    UPROPERTY()
    int32 NbPinataEvents;
    
    UPROPERTY()
    int32 NbMoxxisEvents;
    
    UPROPERTY()
    int32 MoxxisEventTotalBits;
    
    UPROPERTY()
    int32 NbExtractionEvents;
    
    OAKGAME_API FOakInteractiveEventStats();
};

