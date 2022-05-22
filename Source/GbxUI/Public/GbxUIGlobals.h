#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDLCMenuSplitscreenLayouts.h"
#include "GbxDataAsset.h"
#include "TextMarkupDictionaryEntry.h"
#include "UObject/NoExportTypes.h"
#include "GbxMenuSplitscreenLayouts.h"
#include "UObject/NoExportTypes.h"
#include "GbxUIGlobals.generated.h"

class UGbxDialogBoxData;
class UGbxListItemFactory;
class UGbxInputToGlyphMap;
class UGbxHUDData;
class UGbxPlatformToGlyphMap;
class UMediaPlayer;
class UGbxFullScreenMovie;
class UGbxGFxContextualMenuData;
class USwfMovie;
class UGbxMenuData;
class UGbxGFxMenu;

UCLASS(Config=GbxUI)
class GBXUI_API UGbxUIGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxInputToGlyphMap* InputToGlyphMap;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxPlatformToGlyphMap* PlatformToGlyphMap;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultPlatformGlyphHeight;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxDialogBoxData* DialogBoxTemplates;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxListItemFactory* DefaultListItemFactory;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxFullScreenMovie> FullScreenMovieWidget;
    
    UPROPERTY(EditDefaultsOnly)
    UMediaPlayer* FullScreenMediaPlayer;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxHUDData*> PersistentWidgetGroups;
    
    UPROPERTY(EditAnywhere)
    double MaxWidgetLoadTimePerFrameInMs;
    
    UPROPERTY(EditAnywhere)
    UGbxGFxContextualMenuData* GFxContextualMenuTemplate;
    
    UPROPERTY(EditAnywhere)
    FString MarkupStartCharacter;
    
    UPROPERTY(EditAnywhere)
    FString MarkupEndCharacter;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FTextMarkupDictionaryEntry> MarkupDictionary;
    
    UPROPERTY(EditAnywhere)
    FVector2D DefaultGlyphSize;
    
    UPROPERTY(EditAnywhere)
    FString GlyphMarkupStartCharacter;
    
    UPROPERTY(EditAnywhere)
    FString GlyphMarkupEndCharacter;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FText> ClosedCaptioningTable;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxMenuData*> AlwaysLoadedGFxMenus;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<USwfMovie>> AlwaysLoadedGFxMovies;
    
    UPROPERTY(EditAnywhere)
    int32 HintGlyphVSpace;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<UGbxGFxMenu>, FGbxMenuSplitscreenLayouts> SplitscreenLayouts;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    TMap<TSoftClassPtr<UGbxGFxMenu>, FGbxDLCMenuSplitscreenLayouts> DLCSplitscreenLayouts;
    
    UPROPERTY()
    TMap<FSoftObjectPath, FGbxDLCMenuSplitscreenLayouts> SoftDLCSpltiscreenLayouts;
    
public:
    UGbxUIGlobals();
};

