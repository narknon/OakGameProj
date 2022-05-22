#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemPoolInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LootFunctionLibrary.generated.h"

class UItemPoolListData;
class UObject;

UCLASS(BlueprintType)
class GBXINVENTORY_API ULootFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULootFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SpawnItemsRaw(UObject* WorldContextObject, const TArray<UItemPoolListData*>& ItemPoolLists, const TArray<FItemPoolInfo>& ExtraItemPools, int32 GameStage, FVector Location, FRotator Rotation, float InitialVelocity);
    
};

