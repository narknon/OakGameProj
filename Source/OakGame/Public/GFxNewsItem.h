#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxNewsItem.generated.h"

class UGbxTextField;
class UGbxGFxObject;
class UGFxLoadedNewsImage;

UCLASS(NonTransient)
class UGFxNewsItem : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* TooltipTextField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackgroundClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LoadingCircleClip;
    
    UPROPERTY(Transient)
    UGFxLoadedNewsImage* NewsImageClip;
    
    UPROPERTY(Transient)
    FString FrameAndExternalTextureName;
    
public:
    UGFxNewsItem();
};

