#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle_Single.h"
#include "ESpawnLimitType.h"
#include "SpawnerStyleFactory_Single.generated.h"

class USpawnOptionData;
class USpawnFactory;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyleFactory_Single : public USpawnerStyle_Single {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    USpawnFactory* SpawnFactory;
    
    UPROPERTY(EditAnywhere)
    ESpawnLimitType AliveLimitType;
    
    UPROPERTY()
    USpawnOptionData* InternalSpawnOptions;
    
public:
    USpawnerStyleFactory_Single();
    UFUNCTION()
    bool IsFactoryClassAllowed(const UClass* FactoryClass) const;
    
};

