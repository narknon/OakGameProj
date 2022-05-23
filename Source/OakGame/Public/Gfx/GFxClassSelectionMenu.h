#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxClassSelectionMenu.generated.h"

class UGbxGFxGridScrollingList;
class UGFxObject;
class UGbxMenuData;
class APlayerStandIn;
class UGbxTextField;
class AGbxPlayerController;
class UGbxGFxButton;
class UDialogScriptData;

UCLASS()
class OAKGAME_API UGFxClassSelectionMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGFxObject* CharacterPicture;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterClass;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterName;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterDescription;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> MainMenuMenuData;
    
    UPROPERTY(Transient)
    AGbxPlayerController* TargetPC;
    
    UPROPERTY(Transient)
    APlayerStandIn* PlayerStandIn;
    
    UPROPERTY()
    TSoftObjectPtr<UDialogScriptData> DialogScript;
    
public:
    UGFxClassSelectionMenu();
private:
    UFUNCTION()
    void OnPlayerClassItemFocused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlayerClassItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

