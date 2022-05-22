#pragma once
#include "CoreMinimal.h"
#include "TextureAtlasMetaData.generated.h"

class UCohtmlAtlasContainedTextures;
class UCohtmlTextureAtlasDetails;

USTRUCT()
struct COHTMLPLUGIN_API FTextureAtlasMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, UCohtmlAtlasContainedTextures*> AtlasContainedTextures;
    
    UPROPERTY()
    TMap<FString, UCohtmlTextureAtlasDetails*> AtlasDetails;
    
    FTextureAtlasMetaData();
};

