#pragma once
#include "CoreMinimal.h"
#include "ColorRandomizer.h"
#include "OakCharacterCustomization.generated.h"

USTRUCT()
struct FOakCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRandomizeColor;
    
    UPROPERTY(EditAnywhere)
    FColorRandomizer ColorRandomizer;
    
    OAKGAME_API FOakCharacterCustomization();
};

