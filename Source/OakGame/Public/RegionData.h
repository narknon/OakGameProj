#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "RegionData.generated.h"

class UDownloadableExpansionData;
class UPatchExpansionData;

UCLASS()
class URegionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDownloadableExpansionData* DlcExpansion;
    
    UPROPERTY(EditAnywhere)
    UPatchExpansionData* PatchExpansion;
    
    URegionData();
};

