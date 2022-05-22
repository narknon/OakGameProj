#include "TestLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class APlayerController;
class AActor;
class UWorld;

void UTestLibrary::TakeScreenshot(const FString& CustomFilename, const FVector2D OverrideResolution, const bool ShowUI, const bool AddUniqueSuffix) {
}

TArray<FString> UTestLibrary::SortStrings(TArray<FString> Values, bool Descending) {
    return TArray<FString>();
}

TArray<UObject*> UTestLibrary::SortObjectsByName(TArray<UObject*> Values, bool Descending) {
    return TArray<UObject*>();
}

TArray<int32> UTestLibrary::SortIntegers(TArray<int32> Values, bool Descending) {
    return TArray<int32>();
}

TArray<float> UTestLibrary::SortFloats(TArray<float> Values, bool Descending) {
    return TArray<float>();
}

void UTestLibrary::SimulateInputKey(const APlayerController*& PlayerController, FKey Key, TEnumAsByte<EInputEvent> EVENTTYPE, float AmountDepressed) {
}

void UTestLibrary::SimulateInputAxis(const APlayerController*& PlayerController, FKey Key, float Delta, float InterpTime, FLatentActionInfo LatentInfo) {
}

void UTestLibrary::RemoveItemFromCollection(const FString& CollectionName, const FString& ObjectName) {
}

void UTestLibrary::RemoveArrayFromCollection(const FString& CollectionName, TArray<FString>& objectNames) {
}

bool UTestLibrary::ReadFromIni(const FString& Section, const FString& Key, TArray<FString>& Values) {
    return false;
}

void UTestLibrary::MoveItemCollection(const FString& fromCollection, const FString& toCollection, const FString& ObjectName) {
}

void UTestLibrary::MoveArrayCollection(const FString& fromCollection, const FString& toCollection, TArray<FString>& objectNames) {
}

void UTestLibrary::LoadBlueprintAsset(const FString& Path, UObject*& Object) {
}

void UTestLibrary::LoadAsset(const FString& Path, UObject*& Object) {
}

bool UTestLibrary::IsEditorSession() {
    return false;
}

bool UTestLibrary::IsAssetInCollectionEx(const FString& CollectionName, TEnumAsByte<ECollectionType> CollectionType, const FString& ObjectName) {
    return false;
}

bool UTestLibrary::IsAssetInCollection(const FString& CollectionName, const FString& ObjectName) {
    return false;
}

UWorld* UTestLibrary::GetWorldForActor(AActor* Actor) {
    return NULL;
}

void UTestLibrary::GetTestDriversFromStrings(const TArray<FString>& Strings, TArray<TSubclassOf<AActor>>& TestDrivers, FString& UndiscoveredItems) {
}

void UTestLibrary::GetReferencedBlueprintClasses(UObject* Object, UClass* Class, TArray<UClass*>& Classes) {
}

void UTestLibrary::GetObjectTags(TArray<FObjectTag>& ObjectTags, UObject* Asset) {
}

void UTestLibrary::GetAssetPath(UObject* Asset, FString& AssetPath) {
}

void UTestLibrary::GetAssetName(const FString& AssetPath, FString& AssetName) {
}

void UTestLibrary::FilterDiscoveredAssets(TArray<FString>& InPathNames, TArray<FString>& InPrettyNames, TArray<FString>& OutPathNames, TArray<FString>& OutPrettyNames, const FString& AssetNamePrefix, const FString& AssetNamePostfix, const FString& AssetNameContains, const FString& AssetPathContains) {
}

void UTestLibrary::DiscoverAssets(TArray<FString>& PathNames, TArray<FString>& PrettyNames, TArray<FString> Directories, TArray<UClass*> Classes, TArray<UClass*> ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses) {
}

FString UTestLibrary::CreateLocalCollection(const FString& CollectionName, const FString& ParentName) {
    return TEXT("");
}

bool UTestLibrary::ContainsSubPath(const FString& Path, const FString& SubPath) {
    return false;
}

bool UTestLibrary::ContainsObjectTag(TArray<FObjectTag>& ObjectTags, const FString& Category, const FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName) {
    return false;
}

bool UTestLibrary::CollectionExistsEx(const FString& CollectionName, TEnumAsByte<ECollectionType> CollectionType) {
    return false;
}

bool UTestLibrary::CollectionExists(const FString& CollectionName) {
    return false;
}

void UTestLibrary::AddItemToCollection(const FString& CollectionName, const FString& ObjectName) {
}

void UTestLibrary::AddArrayToCollection(const FString& CollectionName, TArray<FString>& objectNames) {
}

UTestLibrary::UTestLibrary() {
}

