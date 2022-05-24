#pragma once
#include "CoreMinimal.h"
#include "AssetTrait.h"
#include "OptionalTextureCompressionMethod.h"
#include "OptionalTextureLODGroup.h"
#include "OptionalInt32.h"
#include "OptionalBool.h"
#include "AssetTraitTexture.generated.h"

UCLASS()
class UAssetTraitTexture : public UAssetTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalTextureCompressionMethod CompressionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalTextureLODGroup LODGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinLODBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxLODBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool HasAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool HassRGB;
    
    UAssetTraitTexture();
};

