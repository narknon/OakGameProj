#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.h"
#include "MaterialTextureAssetParameterData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FMaterialTextureAssetParameterData : public FMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> Texture;
    
    FMaterialTextureAssetParameterData();
};

