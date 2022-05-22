#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle.h"
#include "SpawnBunchListItem.h"
#include "SpawnerStyle_BunchList.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyle_BunchList : public USpawnerStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnBunchListItem> Bunches;
    
    UPROPERTY(EditAnywhere)
    float SpawnDelay;
    
public:
    USpawnerStyle_BunchList();
};

