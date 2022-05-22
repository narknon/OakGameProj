#include "OakUILibrary.h"

class UGameInstance;
class UGbxMenu;
class IGbxMenu;
class UObject;
class UGbxMenuData;
class AOakPlayerController;
class UTutorialMessageDataAsset;
class UInventoryListComponent;
class UInventoryCategoryData;
class AOakCharacter;
class UGFxModalTutorialDataAsset;
class AActor;

void UOakUILibrary::TriggerFastTravelTutorial(UGameInstance* GameInstance) {
}

bool UOakUILibrary::SetGamePaused(UObject* ContextObject, bool bPause) {
    return false;
}

void UOakUILibrary::RemoveTutorialMessageForPlayer(UGameInstance* GameInstance, AOakPlayerController* TargetPlayer, UTutorialMessageDataAsset* MessageData) {
}

void UOakUILibrary::RemoveTutorialMessageForAllPlayers(UGameInstance* GameInstance, UTutorialMessageDataAsset* MessageData) {
}

void UOakUILibrary::PushMenuForAllPlayers(UGameInstance* GameInstance, UGbxMenuData* MenuData) {
}

TScriptInterface<IGbxMenu> UOakUILibrary::PushMenu(AOakPlayerController* PlayerController, UGbxMenuData* MenuData) {
    return NULL;
}

void UOakUILibrary::PopulateInventoryListFromInventoryList(TArray<FOakUIInventoryItemDisplayInfo>& ListToPopulate, UInventoryListComponent* InventoryList, const UInventoryCategoryData* InventoryFilter) {
}

void UOakUILibrary::PopulateInventoryListFromCharacter(TArray<FOakUIInventoryItemDisplayInfo>& ListToPopulate, AOakCharacter* OakCharacter, const UInventoryCategoryData* InventoryFilter) {
}

bool UOakUILibrary::IsGamePaused(UObject* ContextObject) {
    return false;
}

FOakUIInventoryItemDisplayInfo UOakUILibrary::GetInventoryDisplayInfoForActor(AActor* InActor, UInventoryListComponent* Inventory) {
    return FOakUIInventoryItemDisplayInfo{};
}

void UOakUILibrary::CloseMenuForAllPlayers(UGameInstance* GameInstance, UGbxMenuData* MenuData) {
}

void UOakUILibrary::CloseAllMenusForAllPlayers(UGameInstance* GameInstance) {
}

void UOakUILibrary::AddTutorialMessageForPlayer(UGameInstance* GameInstance, AOakPlayerController* TargetPlayer, UTutorialMessageDataAsset* MessageData) {
}

void UOakUILibrary::AddTutorialMessageForAllPlayers(UGameInstance* GameInstance, UTutorialMessageDataAsset* MessageData) {
}

void UOakUILibrary::AddModalTutorialMessageForPlayer(UGameInstance* GameInstance, AOakPlayerController* TargetPlayer, UGFxModalTutorialDataAsset* MessageData) {
}

void UOakUILibrary::AddModalTutorialMessageForAllPlayers(UGameInstance* GameInstance, UGFxModalTutorialDataAsset* MessageData) {
}

UOakUILibrary::UOakUILibrary() {
}

