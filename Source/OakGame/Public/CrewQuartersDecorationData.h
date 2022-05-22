#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "CrewQuartersDecorationData.generated.h"

class UInventoryRarityData;
class UTexture;

UCLASS()
class UCrewQuartersDecorationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    bool bUnlockedByDefault;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> PreviewPicture;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath DecorationAssetReference;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryRarityData> RarityData;
    
    UCrewQuartersDecorationData();
};

