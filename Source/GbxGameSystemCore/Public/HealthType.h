#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "AttributeInitializationData.h"
#include "HealthType.generated.h"

class UHealthTypeData;
class UGameResourcePoolData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHealthType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UHealthTypeData* HealthTypeData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameResourcePoolData* HealthPoolData;
    
    UPROPERTY(EditAnywhere)
    TArray<float> HealthSectionPercentages;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    uint8 bResetIdleTimerIfNoDamage: 1;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    uint8 bUseChanceToExist: 1;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    FAttributeInitializationData ChanceToExist;
    
    UPROPERTY(Transient)
    FGameResourcePoolReference HealthPool;
    
    FHealthType();
};

