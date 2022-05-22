#pragma once
#include "CoreMinimal.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GbxUILibrary.h"
#include "OakUILibrary.generated.h"

class UGbxMenuData;
class AOakPlayerController;
class UTutorialMessageDataAsset;
class UGameInstance;
class UGbxMenu;
class IGbxMenu;
class UObject;
class UInventoryListComponent;
class UInventoryCategoryData;
class AOakCharacter;
class UGFxModalTutorialDataAsset;
class AActor;

UCLASS()
class OAKGAME_API UOakUILibrary : public UGbxUILibrary {
    GENERATED_BODY()
public:
    UOakUILibrary();
    UFUNCTION(BlueprintCallable)
    static void TriggerFastTravelTutorial(UGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGamePaused(UObject* ContextObject, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTutorialMessageForPlayer(UGameInstance* GameInstance, AOakPlayerController* TargetPlayer, UTutorialMessageDataAsset* MessageData);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTutorialMessageForAllPlayers(UGameInstance* GameInstance, UTutorialMessageDataAsset* MessageData);
    
    UFUNCTION(BlueprintCallable)
    static void PushMenuForAllPlayers(UGameInstance* GameInstance, UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable)
    static TScriptInterface<IGbxMenu> PushMenu(AOakPlayerController* PlayerController, UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable)
    static void PopulateInventoryListFromInventoryList(TArray<FOakUIInventoryItemDisplayInfo>& ListToPopulate, UInventoryListComponent* InventoryList, const UInventoryCategoryData* InventoryFilter);
    
    UFUNCTION(BlueprintCallable)
    static void PopulateInventoryListFromCharacter(TArray<FOakUIInventoryItemDisplayInfo>& ListToPopulate, AOakCharacter* OakCharacter, const UInventoryCategoryData* InventoryFilter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGamePaused(UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FOakUIInventoryItemDisplayInfo GetInventoryDisplayInfoForActor(AActor* InActor, UInventoryListComponent* Inventory);
    
    UFUNCTION(BlueprintCallable)
    static void CloseMenuForAllPlayers(UGameInstance* GameInstance, UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable)
    static void CloseAllMenusForAllPlayers(UGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static void AddTutorialMessageForPlayer(UGameInstance* GameInstance, AOakPlayerController* TargetPlayer, UTutorialMessageDataAsset* MessageData);
    
    UFUNCTION(BlueprintCallable)
    static void AddTutorialMessageForAllPlayers(UGameInstance* GameInstance, UTutorialMessageDataAsset* MessageData);
    
    UFUNCTION(BlueprintCallable)
    static void AddModalTutorialMessageForPlayer(UGameInstance* GameInstance, AOakPlayerController* TargetPlayer, UGFxModalTutorialDataAsset* MessageData);
    
    UFUNCTION(BlueprintCallable)
    static void AddModalTutorialMessageForAllPlayers(UGameInstance* GameInstance, UGFxModalTutorialDataAsset* MessageData);
    
};

