#pragma once
#include "CoreMinimal.h"
#include "BlackJackCardDefinition.generated.h"

USTRUCT(BlueprintType)
struct FBlackJackCardDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString DebugString;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CardValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SuitIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CardIndex;
    
    OAKGAME_API FBlackJackCardDefinition();
};

