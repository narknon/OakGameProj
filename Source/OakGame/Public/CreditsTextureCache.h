#pragma once
#include "CoreMinimal.h"
#include "CreditsTextureCache.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCreditsTextureCache {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTexture2D* CreditsTexture;
    
    OAKGAME_API FCreditsTextureCache();
};

