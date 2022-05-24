#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EOptionType.h"
#include "GFxOptionPreviewPanel.generated.h"

class UGbxGFxMovie;
class UTexture2D;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxOptionPreviewPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<EOptionType, FText> TitleTextOverrides;
    
    UPROPERTY(Transient)
    TMap<EOptionType, FText> DescriptionTextOverrides;
    
    UPROPERTY(Transient)
    TMap<EOptionType, UTexture2D*> HelperTextureOverrides;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* Title;
    
    UPROPERTY(Transient)
    UGbxTextField* Description;
    
    UPROPERTY(Transient)
    UGbxGFxMovie* GraphicsPreview;
    
public:
    UGFxOptionPreviewPanel();
};

