#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle_Bunch.h"
#include "ESpawnLimitType.h"
#include "SpawnerStyleFactory_Bunch.generated.h"

class USpawnOptionData;
class USpawnFactory;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyleFactory_Bunch : public USpawnerStyle_Bunch {
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
    USpawnerStyleFactory_Bunch();
    UFUNCTION()
    bool IsFactoryClassAllowed(const UClass* FactoryClass) const;
    
};

