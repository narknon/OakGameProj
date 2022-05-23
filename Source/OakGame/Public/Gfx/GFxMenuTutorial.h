#pragma once
#include "CoreMinimal.h"
#include "GFxMenuTutorialSequence.h"
#include "GFxMenuTutorial.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMenuTutorial {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TutorialName;
    
    UPROPERTY(EditAnywhere)
    FGFxMenuTutorialSequence TutorialSequence;
    
    FGFxMenuTutorial();
};

