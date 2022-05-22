#pragma once
#include "CoreMinimal.h"
#include "LootAudioStinger.generated.h"

class AActor;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FLootAudioStinger {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> SoundActor;
    
    UPROPERTY()
    UWwiseEvent* Sound;
    
    OAKGAME_API FLootAudioStinger();
};

