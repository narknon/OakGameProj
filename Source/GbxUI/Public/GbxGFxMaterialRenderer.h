#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMaterialRenderer.generated.h"

class UGbxGFxMovie;
class UMaterialInterface;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxMaterialRenderer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMaterialInterface* Material;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxMovie> OwningMovie;
    
public:
    FGbxGFxMaterialRenderer();
};

