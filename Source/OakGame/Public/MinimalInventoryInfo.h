#pragma once
#include "CoreMinimal.h"
#include "MinimalInventoryInfo.generated.h"

class AActor;
class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FMinimalInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PickupOrderIdx;
    
    UPROPERTY()
    AActor* StoredActor;
    
    UPROPERTY()
    FString SerialNumber;
    
    UPROPERTY()
    FString ThumbnailName;
    
    UPROPERTY()
    UInventoryCategoryData* InventoryCategory;
    
    UPROPERTY()
    bool bIsTrash;
    
    UPROPERTY()
    bool bIsFavorite;
    
    UPROPERTY()
    bool bIsMissionItem;
    
    UPROPERTY()
    uint32 TrinketPartHash;
    
    UPROPERTY()
    uint32 SkinPartHash;
    
    UPROPERTY()
    uint32 MayhemPartHash;
    
    UPROPERTY()
    uint32 MayhemPartUIStatHash;
    
    UPROPERTY()
    FString ItemJsonObjString;
    
    UPROPERTY()
    bool bBase64ThumbnailGenerated;
    
    OAKGAME_API FMinimalInventoryInfo();
};

