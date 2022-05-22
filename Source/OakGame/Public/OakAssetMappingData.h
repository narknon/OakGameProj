#pragma once
#include "CoreMinimal.h"
#include "AssetMappingData.h"
#include "OakAssetMappingData.generated.h"

UCLASS()
class OAKGAME_API UOakAssetMappingData : public UAssetMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> AbilityTreeItemsMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> PlayerAbilitiesMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> PlayerAbilitiesSlotMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> AugmentSlotMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> AugmentsMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> InventorySlotMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> PlayerClassesMap;
    
    UOakAssetMappingData();
};

