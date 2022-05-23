#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxBehindTheScenesMenu.generated.h"

class UGFxBehindTheScenesMediaSelectionWidget;
class UGbxGFxObject;
class ABehindTheScenesMediaPlayerActor;
class UGFxBehindTheScenesMediaCell;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxBehindTheScenesMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 CategoryIndex;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* Content;
    
    UPROPERTY(Transient)
    UGFxBehindTheScenesMediaSelectionWidget* MediaListClip;
    
    UPROPERTY(Transient)
    ABehindTheScenesMediaPlayerActor* MediaPlayerActor;
    
    UPROPERTY(Transient)
    UGFxBehindTheScenesMediaCell* SelectedMediaCell;
    
public:
    UGFxBehindTheScenesMenu();
    UFUNCTION()
    void OnMediaItemClicked(UGbxGFxListCell* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

