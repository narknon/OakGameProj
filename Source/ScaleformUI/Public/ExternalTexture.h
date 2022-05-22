#pragma once
#include "CoreMinimal.h"
#include "ExternalTexture.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FExternalTexture {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Resource;
    
    UPROPERTY()
    UTexture* Texture;
    
    FExternalTexture();
};

