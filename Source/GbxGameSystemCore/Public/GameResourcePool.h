#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "GameResourcePool.generated.h"

class UGameResourcePoolData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGameResourcePool {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGameResourcePoolData* ResourcePoolData;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MinValue;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MaxValue;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat PercentOfMaxValueReserved;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat ConsumptionRate;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat ActiveRegenerationRate;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat OnIdleRegenerationRate;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat OnIdleRegenerationDelay;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat OnDepletedIdleRegenerationDelay;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat PassiveRegenerationRate;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat PassivePercentRegenerationRate;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat PassiveMissingPercentRegenerationRate;
    
    UPROPERTY(Transient)
    FGbxAttributeInteger RegenerationDisabled;
    
protected:
    UPROPERTY(Transient)
    float CurrentValue;
    
    UPROPERTY(Transient)
    float LastTotalRegenerationRateValue;
    
    UPROPERTY(Transient)
    float LastTotalPercentRegenerationRateValue;
    
    UPROPERTY(Transient)
    float LastEffectiveMaxValue;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat PostAddedRegenerationRate;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat PostAddedPercentRegenerationRate;
    
public:
    FGameResourcePool();
};

