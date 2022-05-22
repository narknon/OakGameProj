#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ZoneMapListData.generated.h"

class UObject;
class UZoneMapData;

UCLASS(BlueprintType)
class OAKGAME_API UZoneMapListData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UZoneMapData*> ZoneMapList;
    
    UZoneMapListData();
    UFUNCTION(BlueprintCallable)
    UZoneMapData* GetZoneMapDataForCurrentLevel(UObject* WorldContextObject);
    
};

