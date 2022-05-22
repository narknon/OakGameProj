#pragma once
#include "CoreMinimal.h"
#include "OakCharacterTexturePair.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FOakCharacterTexturePair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* Comp;
    
    UPROPERTY(EditAnywhere)
    UTexture* Normal;
    
    OAKGAME_API FOakCharacterTexturePair();
};

