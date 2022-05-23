#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxNewsMenu.generated.h"

class UGbxTextField;
class UGFxNewsMenuItemDataAsset;
class UTexture;

UCLASS()
class OAKGAME_API UGFxNewsMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* HeaderText;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyText;
    
    UPROPERTY(Transient)
    UGFxNewsMenuItemDataAsset* NewsData;
    
    UPROPERTY(Transient)
    UTexture* CachedForegroundNewsImage;
    
    UPROPERTY(Transient)
    UTexture* CachedBackgroundNewsImage;
    
public:
    UGFxNewsMenu();
};

