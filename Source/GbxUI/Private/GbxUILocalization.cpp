#include "GbxUILocalization.h"

class AGbxPlayerController;

FText UGbxUILocalization::PlatformToText(const FName Platform, AGbxPlayerController* PC) {
    return FText::GetEmpty();
}

FText UGbxUILocalization::PlatformToRichText(const FName Platform, AGbxPlayerController* PC, FVector2D GlyphSize) {
    return FText::GetEmpty();
}

FSlateBrush UGbxUILocalization::PlatformToGlyph(const FName Platform, AGbxPlayerController* PC) {
    return FSlateBrush{};
}

FText UGbxUILocalization::PlatformToGFxHTMLText(const FName Platform, AGbxPlayerController* PC, float GlyphHeight, int32 VSpace) {
    return FText::GetEmpty();
}

bool UGbxUILocalization::IsPlatformGlyphAvailable(const FName Platform, AGbxPlayerController* PC) {
    return false;
}

bool UGbxUILocalization::IsInputActionGlyphAvailable(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType) {
    return false;
}

FText UGbxUILocalization::InputActionToText(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType) {
    return FText::GetEmpty();
}

FText UGbxUILocalization::InputActionToRichText(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType, FVector2D GlyphSize) {
    return FText::GetEmpty();
}

FSlateBrush UGbxUILocalization::InputActionToGlyph(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType) {
    return FSlateBrush{};
}

FText UGbxUILocalization::InputActionToGFxHTMLText(const FName ActionName, AGbxPlayerController* PC, EGbxActionToTextType GlyphType, float GlyphHeight, int32 VSpace) {
    return FText::GetEmpty();
}

FText UGbxUILocalization::FKeyToGFxHTMLText(const FKey& Key, AGbxPlayerController* PC, EGbxActionToTextType GlyphType, float GlyphHeight) {
    return FText::GetEmpty();
}

UGbxUILocalization::UGbxUILocalization() {
}

