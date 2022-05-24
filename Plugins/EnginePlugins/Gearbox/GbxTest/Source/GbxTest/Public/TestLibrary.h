#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Engine/LatentActionManager.h"
#include "ECollectionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ObjectTag -FallbackName=ObjectTag
#include "TestLibrary.generated.h"

class UObject;
class APlayerController;
class UWorld;
class AActor;

UCLASS(BlueprintType)
class UTestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTestLibrary();
    UFUNCTION(BlueprintCallable)
    static void TakeScreenshot(const FString& CustomFilename, const FVector2D OverrideResolution, const bool ShowUI, const bool AddUniqueSuffix);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SortStrings(TArray<FString> Values, bool Descending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> SortObjectsByName(TArray<UObject*> Values, bool Descending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SortIntegers(TArray<int32> Values, bool Descending);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> SortFloats(TArray<float> Values, bool Descending);
    
    UFUNCTION(BlueprintCallable)
    static void SimulateInputKey(const APlayerController*& PlayerController, FKey Key, TEnumAsByte<EInputEvent> EVENTTYPE, float AmountDepressed);
    
    UFUNCTION(BlueprintCallable)
    static void SimulateInputAxis(const APlayerController*& PlayerController, FKey Key, float Delta, float InterpTime, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveItemFromCollection(const FString& CollectionName, const FString& ObjectName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveArrayFromCollection(const FString& CollectionName, UPARAM(Ref) TArray<FString>& objectNames);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadFromIni(const FString& Section, const FString& Key, TArray<FString>& Values);
    
    UFUNCTION(BlueprintCallable)
    static void MoveItemCollection(const FString& fromCollection, const FString& toCollection, const FString& ObjectName);
    
    UFUNCTION(BlueprintCallable)
    static void MoveArrayCollection(const FString& fromCollection, const FString& toCollection, UPARAM(Ref) TArray<FString>& objectNames);
    
    UFUNCTION(BlueprintPure)
    static void LoadBlueprintAsset(const FString& Path, UObject*& Object);
    
    UFUNCTION(BlueprintPure)
    static void LoadAsset(const FString& Path, UObject*& Object);
    
    UFUNCTION(BlueprintPure)
    static bool IsEditorSession();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAssetInCollectionEx(const FString& CollectionName, TEnumAsByte<ECollectionType> CollectionType, const FString& ObjectName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAssetInCollection(const FString& CollectionName, const FString& ObjectName);
    
    UFUNCTION(BlueprintPure)
    static UWorld* GetWorldForActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static void GetTestDriversFromStrings(const TArray<FString>& Strings, TArray<TSubclassOf<AActor>>& TestDrivers, FString& UndiscoveredItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetReferencedBlueprintClasses(UObject* Object, UClass* Class, TArray<UClass*>& Classes);
    
    UFUNCTION(BlueprintPure)
    static void GetObjectTags(TArray<FObjectTag>& ObjectTags, UObject* Asset);
    
    UFUNCTION(BlueprintPure)
    static void GetAssetPath(UObject* Asset, FString& AssetPath);
    
    UFUNCTION(BlueprintPure)
    static void GetAssetName(const FString& AssetPath, FString& AssetName);
    
    UFUNCTION(BlueprintPure)
    static void FilterDiscoveredAssets(UPARAM(Ref) TArray<FString>& InPathNames, UPARAM(Ref) TArray<FString>& InPrettyNames, TArray<FString>& OutPathNames, TArray<FString>& OutPrettyNames, const FString& AssetNamePrefix, const FString& AssetNamePostfix, const FString& AssetNameContains, const FString& AssetPathContains);
    
    UFUNCTION(BlueprintPure)
    static void DiscoverAssets(TArray<FString>& PathNames, TArray<FString>& PrettyNames, TArray<FString> Directories, TArray<UClass*> Classes, TArray<UClass*> ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses);
    
    UFUNCTION(BlueprintCallable)
    static FString CreateLocalCollection(const FString& CollectionName, const FString& ParentName);
    
    UFUNCTION(BlueprintPure)
    static bool ContainsSubPath(const FString& Path, const FString& SubPath);
    
    UFUNCTION(BlueprintPure)
    static bool ContainsObjectTag(UPARAM(Ref) TArray<FObjectTag>& ObjectTags, const FString& Category, const FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName);
    
    UFUNCTION(BlueprintCallable)
    static bool CollectionExistsEx(const FString& CollectionName, TEnumAsByte<ECollectionType> CollectionType);
    
    UFUNCTION(BlueprintCallable)
    static bool CollectionExists(const FString& CollectionName);
    
    UFUNCTION(BlueprintCallable)
    static void AddItemToCollection(const FString& CollectionName, const FString& ObjectName);
    
    UFUNCTION(BlueprintCallable)
    static void AddArrayToCollection(const FString& CollectionName, UPARAM(Ref) TArray<FString>& objectNames);
    
};

