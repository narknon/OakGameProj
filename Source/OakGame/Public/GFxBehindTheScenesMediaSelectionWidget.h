#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxBehindTheScenesMediaSelectionWidget.generated.h"

class UTexture;
class UGbxGFxGridScrollingList;

UCLASS(NonTransient)
class UGFxBehindTheScenesMediaSelectionWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentListClip;
    
    UPROPERTY(Transient)
    UTexture* Thumbnails[10];
    
public:
    UGFxBehindTheScenesMediaSelectionWidget();
};

