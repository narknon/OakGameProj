#pragma once
#include "CoreMinimal.h"
#include "Transition.generated.h"

class UGFxNewsItem;

USTRUCT(BlueprintType)
struct FTransition {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxNewsItem* Curr;
    
    UPROPERTY(Transient)
    UGFxNewsItem* Next;
    
    OAKGAME_API FTransition();
};

