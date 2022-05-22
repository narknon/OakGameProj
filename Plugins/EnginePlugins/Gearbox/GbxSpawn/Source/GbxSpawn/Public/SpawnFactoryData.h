#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "ESpawnLimitType.h"
#include "SpawnFactoryData.generated.h"

class USpawnFactory;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnFactoryData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USpawnFactory* Factory;
    
    UPROPERTY(EditAnywhere)
    FGbxParam WeightParam;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Probability;
    
    UPROPERTY(EditAnywhere)
    ESpawnLimitType AliveLimitType;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AliveLimitParam;
    
    UPROPERTY()
    int32 AliveLimit;
    
    FSpawnFactoryData();
};

