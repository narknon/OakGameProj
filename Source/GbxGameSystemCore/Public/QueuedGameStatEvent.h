#pragma once
#include "CoreMinimal.h"
#include "QueuedGameStatEvent.generated.h"

class AActor;
class UGameStatData;

USTRUCT()
struct FQueuedGameStatEvent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> StatContext;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGameStatData> GameStat;
    
    GBXGAMESYSTEMCORE_API FQueuedGameStatEvent();
};

