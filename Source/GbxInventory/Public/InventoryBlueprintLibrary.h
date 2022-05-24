#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InventoryBalanceStateInitializationData.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "InventoryBlueprintLibrary.generated.h"

class UInventoryBalanceStateComponent;
class UInventoryGenericPartData;
class AActor;
class UObject;

UCLASS(BlueprintType)
class GBXINVENTORY_API UInventoryBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInventoryBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static TArray<UInventoryGenericPartData*> GetPossibleGenericParts(UInventoryBalanceStateComponent* InventoryBalanceState, const FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts);
    
    UFUNCTION(BlueprintCallable)
    static UInventoryBalanceStateComponent* GetInventoryBalanceState(AActor* Inventory);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* CreateInventory(UObject* WorldContextObject, bool bCreatePickup, FVector SpawnLocation, const FInventoryBalanceStateInitializationData& InitData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* CloneInventory(AActor* SourceInventory);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* BuildInventory(UObject* WorldContextObject, bool bCreatePickup, FVector SpawnLocation, FInventoryBalanceStateInitializationData InitData);
    
};

