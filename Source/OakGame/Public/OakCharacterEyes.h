#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacterEyes.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterEyes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FColor> RandomEyeColors;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideEyeColor;
    
    OAKGAME_API FOakCharacterEyes();
};

