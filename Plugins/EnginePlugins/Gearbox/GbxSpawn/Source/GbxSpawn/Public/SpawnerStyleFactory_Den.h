#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle_Den.h"
#include "ESpawnLimitType.h"
#include "SpawnerStyleFactory_Den.generated.h"

class USpawnOptionData;
class USpawnFactory;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnerStyleFactory_Den : public USpawnerStyle_Den {
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
    USpawnerStyleFactory_Den();
    UFUNCTION()
    bool IsFactoryClassAllowed(const UClass* FactoryClass) const;
    
};

