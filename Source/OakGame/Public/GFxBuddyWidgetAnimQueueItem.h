#pragma once
#include "CoreMinimal.h"
#include "GFxBuddyWidgetAnimQueueItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxBuddyWidgetAnimQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* TargetActor;
    
    FGFxBuddyWidgetAnimQueueItem();
};

