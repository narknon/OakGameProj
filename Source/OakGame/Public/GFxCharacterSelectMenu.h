#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "PlayerClassInfo.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GFxCharacterSelectMenuDelegateDelegate.h"
#include "Engine/LatentActionManager.h"
#include "GbxMenuInputEvent.h"
#include "GFxCharacterSelectMenu.generated.h"

class UGbxGFxObject;
class UGbxMenuData;
class UGFxCharacterSelectButton;
class UGbxTextField;
class UGFxLobbyWidget;
class UGbxGFxButton;
class UDialogScriptData;
class UObject;

UCLASS()
class UGFxCharacterSelectMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGFxCharacterSelectMenuDelegate OnCharacterFocused;
    
    UPROPERTY(BlueprintAssignable)
    FGFxCharacterSelectMenuDelegate OnCharacterSelected;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> LoadGameMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    FString ButtonLibraryName;
    
    UPROPERTY(EditDefaultsOnly)
    FString PlayerStatusLibraryName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPlayerClassInfo> PlayerClassInfos;
    
    UPROPERTY(Transient)
    TArray<UGFxCharacterSelectButton*> PlayerClassButtons;
    
    UPROPERTY(Transient)
    UGbxTextField* CountdownText;
    
    UPROPERTY(Transient)
    UGbxTextField* PlayerName;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CharacterDescriptionPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterDescriptionLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* CharacterDescription;
    
    UPROPERTY(Transient)
    UGFxLobbyWidget* LobbyWidget;
    
    UPROPERTY()
    TSoftObjectPtr<UDialogScriptData> DialogScript;
    
public:
    UGFxCharacterSelectMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void WaitForValidPlayerController(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) const;
    
private:
    UFUNCTION()
    void ShowLoadGameMenu() const;
    
    UFUNCTION()
    void OnPlayerClassItemFocused(UGbxGFxButton* ButtonFocused, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlayerClassItemClicked(UGbxGFxButton* ButtonClicked, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

