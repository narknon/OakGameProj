#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "GbxInputToGlyphMapItem.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxInputToGlyphMapItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    FText KeyboardMouseGlyph;
    
    UPROPERTY(EditAnywhere)
    FText PS4Glyph;
    
    UPROPERTY(EditAnywhere)
    FText XboxOneGlyph;
    
    UPROPERTY(EditAnywhere)
    FText DPXGlyph;
    
    UPROPERTY(EditAnywhere)
    FText MPXGlyph;
    
    UPROPERTY(EditAnywhere)
    FText GenericGamepadGlyph;
    
    UPROPERTY(EditAnywhere)
    FText SwitchProGlyph;
    
    UPROPERTY(EditAnywhere)
    FText StadiaGlyph;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush KeyboardMouseGlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush PS4GlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush XboxOneGlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush DPXGlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush MPXGlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush GenericGamepadGlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush SwitchProGlyphBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush StadiaGlyphBrush;
    
    FGbxInputToGlyphMapItem();
};

