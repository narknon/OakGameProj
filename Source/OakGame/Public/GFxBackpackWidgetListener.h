#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxMenuInputEvent.h"
#include "GFxBackpackWidgetListener.generated.h"

class UGbxGFxGridScrollingList;
class UOakThumbnailManager;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxBackpackWidgetListener : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxGridScrollingList> ListeningList;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UOakThumbnailManager> ListeningThumbnailManager;
    
public:
    UGFxBackpackWidgetListener();
private:
    UFUNCTION()
    void OnThumbnailLoaded();
    
    UFUNCTION()
    void OnBackpackGridItemSelected(UGbxGFxListCell* ListItem);
    
    UFUNCTION()
    void OnBackpackGridItemPressed(UGbxGFxListCell* PressedItem, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBackpackGridItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo);
    
};

