#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.h"
#include "MaterialTextureParameterData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FMaterialTextureParameterData : public FMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
    FMaterialTextureParameterData();
};

