#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "EGbxActionToTextType.h"
#include "InputCoreTypes.h"
#include "GbxUILocalization.generated.h"

class AGbxPlayerController;

UCLASS(BlueprintType)
class GBXUI_API UGbxUILocalization : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxUILocalization();
    UFUNCTION(BlueprintCallable)
    static FText PlatformToText(const FName Platform, AGbxPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static FText PlatformToRichText(const FName Platform, AGbxPlayerController* PC, FVector2D GlyphSize);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush PlatformToGlyph(const FName Platform, AGbxPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static FText PlatformToGFxHTMLText(const FName Platform, AGbxPlayerController* PC, float GlyphHeight, int32 VSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlatformGlyphAvailable(const FName Platform, AGbxPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInputActionGlyphAvailable(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType);
    
    UFUNCTION(BlueprintCallable)
    static FText InputActionToText(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType);
    
    UFUNCTION(BlueprintCallable)
    static FText InputActionToRichText(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType, FVector2D GlyphSize);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush InputActionToGlyph(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType);
    
    UFUNCTION(BlueprintCallable)
    static FText InputActionToGFxHTMLText(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType, float GlyphHeight, int32 VSpace);
    
    UFUNCTION(BlueprintCallable)
    static FText FKeyToGFxHTMLText(const FKey& Key, AGbxPlayerController* PC, EGbxActionToTextType GlyphType, float GlyphHeight);
    
};

