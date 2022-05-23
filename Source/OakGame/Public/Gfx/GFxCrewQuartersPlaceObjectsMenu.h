#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxBackpackWidgetConfig.h"
#include "GFxBackpackWidget.h"
#include "GbxMenuInputEvent.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxCrewQuartersPlaceObjectsMenu.generated.h"

class UOakThumbnailManager;
class ACrewQuartersRoom;
class UGFxCrewQaurtersPlaceObjectsBackpackObject;
class UCrewQuartersDecorationData;
class UObject;
class UGbxGFxHintWidget;
class AOakPlayerController;
class UGbxMenuData;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxCrewQuartersPlaceObjectsMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGFxBackpackWidgetConfig BackpackWidgetConfig;
    
    UPROPERTY(EditAnywhere)
    float NewPreviewDelaySeconds;
    
protected:
    UPROPERTY(Transient)
    FGFxBackpackWidget BackpackWidget;
    
    UPROPERTY(Transient)
    UGFxCrewQaurtersPlaceObjectsBackpackObject* BackpackClip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ACrewQuartersRoom> Room;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> CrewQuartersIO;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* ThumbnailManager;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ButtonPromptHintClip;
    
    UPROPERTY(Transient)
    bool bMenuStarted;
    
    UPROPERTY(Transient)
    bool bMenuSetUp;
    
    UPROPERTY(Transient)
    UCrewQuartersDecorationData* RevertToDecorationData;
    
    UPROPERTY(Transient)
    float TimeTilNextPreview;
    
    UPROPERTY(Transient)
    bool bPreviewRequested;
    
public:
    UGFxCrewQuartersPlaceObjectsMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void OpenPlaceObjectsMenu(AOakPlayerController* InOakPC, UGbxMenuData* InMenuData, ACrewQuartersRoom* InRoom, UObject* InIO) const;
    
protected:
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnListItemSelected(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnListItemClicked(const FOakUIInventoryItemDisplayInfo& Item, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
};

