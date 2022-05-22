#pragma once
#include "CoreMinimal.h"
#include "SpawnerLinkData.generated.h"

class AActor;
class ASpawner;
class USpawnerLinkComponent;
class UTeamComponent;
class USpawnerComponent;

USTRUCT(BlueprintType)
struct FSpawnerLinkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Owner;
    
    UPROPERTY()
    ASpawner* Spawner;
    
    UPROPERTY(Export)
    UTeamComponent* TeamComp;
    
    UPROPERTY(Export)
    USpawnerComponent* SpawnerComp;
    
    UPROPERTY(Export)
    USpawnerLinkComponent* LinkComp;
    
    GBXSPAWN_API FSpawnerLinkData();
};

