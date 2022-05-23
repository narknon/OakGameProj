#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GFxNewsMenuItemDataAsset.generated.h"

class UTexture;

UCLASS()
class UGFxNewsMenuItemDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Header;
    
    UPROPERTY(EditAnywhere)
    FText Body;
    
    UPROPERTY(EditAnywhere)
    UTexture* BackgroundImage;
    
    UPROPERTY(EditAnywhere)
    UTexture* ForegroundImage;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayItem;
    
    UGFxNewsMenuItemDataAsset();
};

