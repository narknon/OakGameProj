#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "LoadGameMenuEntry.h"
#include "GbxMenuInputEvent.h"
#include "GFxLoadGameMenu.generated.h"

class UGbxMenuData;
class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxRadioButtonList;
class UGFxSaveGameDetails;
class UDialogScriptData;
class UGbxGFxButton;
class UGbxGFxHintWidget;
class AGbxPlayerController;
class APlayerStandIn;
class UGbxGFxDialogBox;

UCLASS(Config=Game)
class UGFxLoadGameMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> ClassSelectionMenuData;
    
    UPROPERTY(Config)
    TArray<FLoadGameMenuEntry> LoadGameMenuEntries;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> MainMenuMenuData;
    
    UPROPERTY(Transient)
    UGbxTextField* PlayerName;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuTitle;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LoadInProgressClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LoadCharacterPanel;
    
    UPROPERTY(Transient)
    UGbxGFxRadioButtonList* SaveGameList;
    
    UPROPERTY(Transient)
    UGFxSaveGameDetails* SaveGameDetails;
    
    UPROPERTY(Transient)
    UGbxGFxButton* CreateCharacterButton;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CreateCharacterButtonHint;
    
    UPROPERTY(Transient)
    UGbxTextField* CountdownText;
    
    UPROPERTY(Transient)
    AGbxPlayerController* TargetPC;
    
    UPROPERTY(Transient)
    APlayerStandIn* PlayerStandIn;
    
    UPROPERTY()
    TSoftObjectPtr<UDialogScriptData> DialogScript;
    
public:
    UGFxLoadGameMenu();
private:
    UFUNCTION()
    void OnSaveGameItemFocused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSaveGameItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPromptNoSaveGame(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPromptDeleteCorruptSavegame(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnDeleteCharacterChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnCreateCharacterButtonClicked(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

