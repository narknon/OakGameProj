#pragma once
#include "CoreMinimal.h"
#include "OakCharacterTexturePair.h"
#include "OakCharacterPattern.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterPattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Primary;
    
    UPROPERTY(EditAnywhere)
    bool bOverridePrimary;
    
    UPROPERTY(EditAnywhere)
    float Secondary;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSecondary;
    
    UPROPERTY(EditAnywhere)
    float Tertiary;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTertiary;
    
    UPROPERTY(EditAnywhere)
    float Skin;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSkin;
    
    UPROPERTY(EditAnywhere)
    bool bRandomizeUse;
    
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UPROPERTY(EditAnywhere)
    bool bRandomizeTexture;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakCharacterTexturePair> Textures;
    
    OAKGAME_API FOakCharacterPattern();
};

