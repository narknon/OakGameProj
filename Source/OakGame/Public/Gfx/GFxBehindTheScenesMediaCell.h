#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxBehindTheScenesMediaCell.generated.h"

class UGbxGFxObject;
class UTexture;

UCLASS(NonTransient)
class UGFxBehindTheScenesMediaCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ThumbnailClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TypeIconClip;
    
public:
    UGFxBehindTheScenesMediaCell();
    UFUNCTION()
    void UpdateThumbnail(UTexture* InNewIconData, int32 TextureIndex, bool bForce);
    
};

