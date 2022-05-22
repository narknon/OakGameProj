#pragma once
#include "CoreMinimal.h"
#include "SpawnDetails.h"
#include "SpawnFactoryData.h"
#include "GbxDataAsset.h"
#include "SpawnOptionData.generated.h"

UCLASS()
class GBXSPAWN_API USpawnOptionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnFactoryData> Options;
    
    UPROPERTY(EditAnywhere)
    FSpawnDetails SpawnDetails;
    
public:
    USpawnOptionData();
};

