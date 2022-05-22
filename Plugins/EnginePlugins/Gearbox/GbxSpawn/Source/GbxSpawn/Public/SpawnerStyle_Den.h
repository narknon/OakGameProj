#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "SpawnerStyle.h"
#include "SpawnerStyle_Den.generated.h"

class USpawnOptionData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyle_Den : public USpawnerStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
    UPROPERTY(EditAnywhere)
    bool bInfinite;
    
    UPROPERTY(EditAnywhere)
    FGbxParam NumActorsParam;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaxAliveActorsWhenPassive;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaxAliveActorsWhenThreatened;
    
    UPROPERTY(EditAnywhere)
    float SpawnDelay;
    
    UPROPERTY(EditAnywhere)
    float WaveDelay;
    
    UPROPERTY(EditAnywhere)
    float WavePercent;
    
    UPROPERTY()
    FGbxParam NumAliveActorsParam;
    
public:
    USpawnerStyle_Den();
};

