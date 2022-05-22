#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle.h"
#include "SpawnerStyle_Single.generated.h"

class USpawnOptionData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyle_Single : public USpawnerStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
public:
    USpawnerStyle_Single();
};

