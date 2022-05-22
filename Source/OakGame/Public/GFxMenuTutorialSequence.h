#pragma once
#include "CoreMinimal.h"
#include "GFxMenuTutorialState.h"
#include "GFxMenuTutorialSequence.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMenuTutorialSequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGFxMenuTutorialState> SequenceList;
    
    FGFxMenuTutorialSequence();
};

