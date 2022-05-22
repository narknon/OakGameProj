#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "SpawnBunchListItem.generated.h"

class USpawnOptionData;

USTRUCT(BlueprintType)
struct FSpawnBunchListItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
    UPROPERTY(EditAnywhere)
    FGbxParam NumActorsParam;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointGroupName;
    
    GBXSPAWN_API FSpawnBunchListItem();
};

