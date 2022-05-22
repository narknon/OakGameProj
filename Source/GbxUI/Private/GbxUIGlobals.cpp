#include "GbxUIGlobals.h"

UGbxUIGlobals::UGbxUIGlobals() {
    this->InputToGlyphMap = NULL;
    this->PlatformToGlyphMap = NULL;
    this->DefaultPlatformGlyphHeight = 20.00f;
    this->DialogBoxTemplates = NULL;
    this->DefaultListItemFactory = NULL;
    this->FullScreenMovieWidget = NULL;
    this->FullScreenMediaPlayer = NULL;
    this->MaxWidgetLoadTimePerFrameInMs = 2.50f;
    this->GFxContextualMenuTemplate = NULL;
    this->HintGlyphVSpace = -45;
}

