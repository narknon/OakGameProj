#pragma once
#include "CoreMinimal.h"
#include "PlayerItemDisplayInfo.generated.h"

class AActor;
class AOakPlayerController;

USTRUCT(BlueprintType)
struct FPlayerItemDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AOakPlayerController* AssociatedPlayer;
    
    UPROPERTY(Transient)
    AActor* AssociatedItem;
    
    UPROPERTY(Transient)
    AActor* AssociatedDisplayItem;
    
    OAKGAME_API FPlayerItemDisplayInfo();
};

