#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory.h"
#include "SpawnFactory_Container.generated.h"

class USpawnOptionData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnFactory_Container : public USpawnFactory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USpawnOptionData* Options;
    
public:
    USpawnFactory_Container();
};

