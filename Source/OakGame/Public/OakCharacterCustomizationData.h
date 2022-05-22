#pragma once
#include "CoreMinimal.h"
#include "OakCharacterColorization.h"
#include "OakCharacterPattern.h"
#include "OakCharacterEyes.h"
#include "OakCharacterSkinTone.h"
#include "OakCharacterTattoos.h"
#include "OakCharacterDecal.h"
#include "OakCharacterHair.h"
#include "OakCharacterCustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOakCharacterColorization> Customization_Colorizations;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_Colorization;
    
    UPROPERTY(EditAnywhere)
    FOakCharacterPattern Customization_Pattern;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_Pattern;
    
    UPROPERTY(EditAnywhere)
    FOakCharacterSkinTone Customization_SkinTone;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_SkinTone;
    
    UPROPERTY(EditAnywhere)
    FOakCharacterTattoos Customization_Tattoos;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_Tattoos;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakCharacterHair> Customization_Hairs;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_Hair;
    
    UPROPERTY(EditAnywhere)
    FOakCharacterEyes Customization_Eyes;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_Eyes;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakCharacterDecal> Customization_Decals;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomization_Decal;
    
    UPROPERTY()
    FOakCharacterColorization Customization_Colorization;
    
    UPROPERTY()
    FOakCharacterHair Customization_Hair;
    
    UPROPERTY()
    FOakCharacterDecal Customization_Decal;
    
    OAKGAME_API FOakCharacterCustomizationData();
};

