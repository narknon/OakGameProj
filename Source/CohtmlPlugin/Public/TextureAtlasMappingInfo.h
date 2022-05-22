#pragma once
#include "CoreMinimal.h"
#include "TextureAtlasMappingInfo.generated.h"

USTRUCT()
struct FTextureAtlasMappingInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AtlasPath;
    
    UPROPERTY()
    int32 Width;
    
    UPROPERTY()
    int32 Height;
    
    UPROPERTY()
    int32 OriginX;
    
    UPROPERTY()
    int32 OriginY;
    
    COHTMLPLUGIN_API FTextureAtlasMappingInfo();
};

