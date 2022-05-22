#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "MultiSpawnPoint.generated.h"

class USpawnPointComponent;

UCLASS()
class AMultiSpawnPoint : public ASpawnPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<USpawnPointComponent*> SpawnPointComponents;
    
public:
    AMultiSpawnPoint();
};

