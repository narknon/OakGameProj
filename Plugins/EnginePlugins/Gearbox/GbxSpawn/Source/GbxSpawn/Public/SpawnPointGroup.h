#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPointGroup.generated.h"

class AActor;
class ASpawnPoint;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnPointGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UPROPERTY(EditAnywhere)
    AActor* TerritoryActorForThisGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<ASpawnPoint*> SpawnPoints;
    
    UPROPERTY(EditAnywhere)
    bool bRandomize;
    
    FSpawnPointGroup();
};

