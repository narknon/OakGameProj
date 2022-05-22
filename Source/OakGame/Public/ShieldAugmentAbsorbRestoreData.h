#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "ShieldAugmentAbsorbRestoreData.generated.h"

class UGbxDamageType;

USTRUCT(BlueprintType)
struct FShieldAugmentAbsorbRestoreData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOnlyTriggerOnBarrier;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGbxDamageType>> TriggeringDamageTypes;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData RestoreAmount;
    
    OAKGAME_API FShieldAugmentAbsorbRestoreData();
};

