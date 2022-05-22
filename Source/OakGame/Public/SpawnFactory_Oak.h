#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_Generic.h"
#include "SpawnFactory_Oak.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_Oak : public USpawnFactory_Generic {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bCopyRegionDataToSpawnedActors;
    
    USpawnFactory_Oak();
};

