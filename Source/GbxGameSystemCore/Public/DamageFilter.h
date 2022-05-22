#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "AttributeInitializationData.h"
#include "DamageFilter.generated.h"

class UDamageSource;
class UGbxDamageType;
class UGbxCondition;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UDamageFilter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bExactDamageSourceClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(EditAnywhere)
    bool bExactDamageTypeClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ConditionSelf;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ConditionAttacker;
    
    UPROPERTY(EditAnywhere)
    uint8 bOnlyAoEDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMustNotBeSelfDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseRandomChance: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData RandomChance;
    
public:
    UDamageFilter();
};

