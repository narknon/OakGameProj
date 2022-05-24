#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "GameResourcePoolReplicationType.h"
#include "GameResourcePoolData.generated.h"

class UGameResourceData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGameResourcePoolData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameResourceData* Resource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAttributeInitializationData BaseMaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartingValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartWithMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartWithMaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUpdateCurrentValueOnExtremaChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumReservedValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckFilledAgainstOldValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseConsumptionRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseActiveRegenerationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BasePassiveRegenerationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BasePassivePercentRegenerationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BasePassiveMissingPercentRegenerationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseOnIdleRegenerationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseOnIdleRegenerationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseOnDepletedRegenerationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecentImpulseTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOnlyReplicateToOwner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<GameResourcePoolReplicationType> ReplicationType;
    
    UGameResourcePoolData();
};

