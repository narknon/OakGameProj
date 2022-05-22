#pragma once
#include "CoreMinimal.h"
#include "GFxMenuTutorial.h"
#include "GFxMenuTutorialTintClipData.h"
#include "GFxMenuTutorialCollection.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMenuTutorialCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGFxMenuTutorial> Tutorials;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxMenuTutorialTintClipData> TintClips;
    
    FGFxMenuTutorialCollection();
};

