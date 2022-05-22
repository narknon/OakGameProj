#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacterCustomization.h"
#include "OakCharacterTattoos.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterTattoos : public FOakCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor TattooColor;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTattooColor;
    
    OAKGAME_API FOakCharacterTattoos();
};

