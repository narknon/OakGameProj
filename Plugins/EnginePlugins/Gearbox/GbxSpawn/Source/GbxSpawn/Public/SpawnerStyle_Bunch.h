#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "SpawnerStyle.h"
#include "SpawnerStyle_Bunch.generated.h"

class USpawnOptionData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyle_Bunch : public USpawnerStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
    UPROPERTY(EditAnywhere)
    FGbxParam NumActorsParam;
    
    UPROPERTY(EditAnywhere)
    float SpawnDelay;
    
public:
    USpawnerStyle_Bunch();
};

