#pragma once
#include "CoreMinimal.h"
#include "GbxGFxGridScrollingList.h"
#include "GbxMenuInputEvent.h"
#include "GFxLobbyWidgetPlayerList.generated.h"

class UGbxGFxButton;
class UGFxLobbyWidget;

UCLASS(NonTransient)
class UGFxLobbyWidgetPlayerList : public UGbxGFxGridScrollingList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxLobbyWidget* LobbyWidgetOwner;
    
public:
    UGFxLobbyWidgetPlayerList();
private:
    UFUNCTION()
    void OnPlayerItemUnhovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnPlayerItemHovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnPlayerItemClicked(UGbxGFxButton* ClickedButton, const FGbxMenuInputEvent& InputInfo);
    
};

