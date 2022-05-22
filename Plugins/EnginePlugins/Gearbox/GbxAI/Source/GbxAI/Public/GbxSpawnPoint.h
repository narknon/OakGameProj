#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "GbxSpawnPoint.generated.h"

class USpawnOptionData;
class USpawnPointComponent;
class USpawnNodeComponent;

UCLASS(Abstract)
class GBXAI_API AGbxSpawnPoint : public ASpawnPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    USpawnNodeComponent* SpawnNodeComponent;
    
public:
    AGbxSpawnPoint();
    UFUNCTION(BlueprintCallable)
    static bool HasNavNearSpawnPointFor(USpawnPointComponent* SpawnPointComp, USpawnOptionData* SpawnOptions);
    
};

