#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AssetMappingData.generated.h"

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UAssetMappingData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> ChallengesMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> GameStatDataMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> CustomizationDataMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> MissionsMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> ObjectiveSetsMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> InventoryCategoryMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, FString> UINamesMap;
    
    UAssetMappingData();
};

