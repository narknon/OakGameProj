#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapPOIEntry.h"
#include "EOakLeague.h"
#include "AdditionalZoneMapData.generated.h"

class UZoneMapData;
class UDownloadableContentData;
class UPatchExpansionData;

UCLASS(BlueprintType)
class OAKGAME_API UAdditionalZoneMapData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UZoneMapData* ParentZoneMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSoftObjectPath ZoneMapMeshAssetReference;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FZoneMapPOIEntry> AdditionalZoneMapPOIList;
    
    UPROPERTY(Transient)
    TEnumAsByte<EOakLeague> AssociatedLeague;
    
    UPROPERTY(Transient)
    UPatchExpansionData* AssociatedPatch;
    
    UPROPERTY(Transient)
    UDownloadableContentData* AssociatedDLC;
    
    UAdditionalZoneMapData();
};

