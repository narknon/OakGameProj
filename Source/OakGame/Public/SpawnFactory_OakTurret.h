#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_Oak.h"
#include "SpawnFactory_OakTurret.generated.h"

class USpawnFactory;
class ATurretSeatPawn;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakTurret : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    USpawnFactory* SeatFactory;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ATurretSeatPawn> TurretActorClass;
    
public:
    USpawnFactory_OakTurret();
};

