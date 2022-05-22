#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_Oak.h"
#include "SpawnFactory_OakProjectile.generated.h"

class AOakProjectile;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakProjectile : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakProjectile> ProjectileClass;
    
public:
    USpawnFactory_OakProjectile();
};

