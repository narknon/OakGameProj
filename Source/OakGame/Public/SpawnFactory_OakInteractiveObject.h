#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_Oak.h"
#include "SpawnFactory_OakInteractiveObject.generated.h"

class AInteractiveObject;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakInteractiveObject : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AInteractiveObject> InteractiveObjectClass;
    
public:
    USpawnFactory_OakInteractiveObject();
};

