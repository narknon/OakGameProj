#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventoryListEntry.h"
#include "EOakUIInventoryItemUseType.h"
#include "OakUIInventoryItemDisplayInfo.generated.h"

class UManufacturerData;
class UInventoryRarityData;
class UTexture;
class UObject;
class AActor;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakUIInventoryItemDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 ItemLevel;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText ManufacturerName;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 ItemScore;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bNew;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bFavorite;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bTrash;
    
    UPROPERTY(Transient)
    bool bCanEquip;
    
    UPROPERTY(Transient)
    bool bIsEquipped;
    
    UPROPERTY(Transient)
    bool bCellLocked;
    
    UPROPERTY(Transient)
    bool bCellUnavailable;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> ReferenceObject;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UTexture> ReferencePicture;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 PickupOrderIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FInventoryListEntry ListEntry;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FInventoryListEntryHandle ItemHandle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> ItemActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UInventoryRarityData> RarityData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UManufacturerData> ManufacturerData;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName SpecialSortName;
    
    UPROPERTY(Transient)
    EOakUIInventoryItemUseType UseType;
    
    UPROPERTY(Transient)
    bool bUseCosmeticLabel;
    
    FOakUIInventoryItemDisplayInfo();
};

