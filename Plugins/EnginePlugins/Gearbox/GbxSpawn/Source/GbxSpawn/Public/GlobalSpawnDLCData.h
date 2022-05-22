#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "SpawnDLCItem.h"
#include "GlobalSpawnDLCData.generated.h"

UCLASS()
class GBXSPAWN_API UGlobalSpawnDLCData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnDLCItem> DLCs;
    
    UGlobalSpawnDLCData();
};

