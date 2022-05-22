#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacterCustomization.h"
#include "OakCharacterTexturePair.h"
#include "OakCharacterDecal.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FOakCharacterDecal : public FOakCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DecalStrength;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDecalStrength;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DecalColor;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDecalColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DecalColorHighlight;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDecalColorHighlight;
    
    UPROPERTY(EditAnywhere)
    UTexture* Texture_Comp;
    
    UPROPERTY(EditAnywhere)
    UTexture* Texture_Normal;
    
    UPROPERTY(EditAnywhere)
    UTexture* Texture_BaseColor;
    
    UPROPERTY()
    TArray<FOakCharacterTexturePair> Textures;
    
    OAKGAME_API FOakCharacterDecal();
};

