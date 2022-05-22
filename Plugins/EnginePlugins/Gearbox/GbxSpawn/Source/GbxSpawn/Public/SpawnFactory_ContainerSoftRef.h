#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory.h"
#include "SpawnOptionDataSoftPath.h"
#include "SpawnFactory_ContainerSoftRef.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnFactory_ContainerSoftRef : public USpawnFactory {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSpawnOptionDataSoftPath OptionsPath;
    
public:
    USpawnFactory_ContainerSoftRef();
};

