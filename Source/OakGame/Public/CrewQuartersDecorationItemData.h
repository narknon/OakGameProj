#pragma once
#include "CoreMinimal.h"
#include "GbxCustomizationData.h"
#include "UObject/NoExportTypes.h"
#include "CrewQuartersDecorationItemData.generated.h"

class UCustomizationInventoryData;
class UCustomizationInventoryAssetSetup;
class UInventoryAspectData;
class UInventoryRarityData;
class UCustomizationInventoryBalanceData;
class UDownloadableContentData;

UCLASS()
class OAKGAME_API UCrewQuartersDecorationItemData : public UGbxCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FString DecorationAssetPath;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bIsDLC;
    
    UPROPERTY(EditDefaultsOnly)
    UCustomizationInventoryAssetSetup* InventorySetup;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UInventoryAspectData*> InventoryAspectList;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryRarityData> RarityData;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, VisibleInstanceOnly)
    UCustomizationInventoryBalanceData* BalanceData;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, VisibleInstanceOnly)
    UCustomizationInventoryData* InventoryData;
    
    UPROPERTY(EditAnywhere)
    FRotator DefaultPreviewRotation;
    
    UPROPERTY(EditAnywhere)
    UDownloadableContentData* DlcContentData;
    
    UCrewQuartersDecorationItemData();
};

