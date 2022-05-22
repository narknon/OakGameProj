#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "OakHitRegionModifierData.generated.h"

class UGbxCondition;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct FOakHitRegionModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageScale;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    OAKGAME_API FOakHitRegionModifierData();
};

