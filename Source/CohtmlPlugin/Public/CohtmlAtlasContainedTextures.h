#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CohtmlAtlasContainedTextures.generated.h"

class UTexture2D;

UCLASS()
class COHTMLPLUGIN_API UCohtmlAtlasContainedTextures : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<UTexture2D*> Textures;
    
    UCohtmlAtlasContainedTextures();
};

