#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxCrewQuartersMoodMenuMoodInfo.h"
#include "GbxMenuInputEvent.h"
#include "GFxCrewQuartersMoodMenu.generated.h"

class ACrewQuartersRoom;
class UGbxGFxGridScrollingList;
class UTexture;
class UGFxCrewQuartersMoodMenuInfoPanelObject;
class UGbxTextField;
class UGbxGFxSlider;
class AOakPlayerController;
class UGbxMenuData;
class UGbxGFxListCell;

UCLASS()
class UGFxCrewQuartersMoodMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> SampleMoodPreviewTexture;
    
    UPROPERTY(Transient)
    UGFxCrewQuartersMoodMenuInfoPanelObject* InfoPanelClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* MoodListClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* MoodListScrollbarClip;
    
    UPROPERTY(Transient)
    UGbxTextField* UnlockedTextClip;
    
    UPROPERTY(Transient)
    TArray<FGFxCrewQuartersMoodMenuMoodInfo> MoodListData;
    
    UPROPERTY(Transient)
    int32 NumUnlockedCount;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ACrewQuartersRoom> Room;
    
public:
    UGFxCrewQuartersMoodMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void OpenCrewQuartersMoodMenu(AOakPlayerController* InOakPC, UGbxMenuData* InMoodMenuData, ACrewQuartersRoom* InRoom) const;
    
private:
    UFUNCTION()
    void OnMoodItemSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnMoodItemClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
};

