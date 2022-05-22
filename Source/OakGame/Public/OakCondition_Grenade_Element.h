#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "OakCondition_Grenade_Element.generated.h"

class UGbxDamageType;

UCLASS(CollapseCategories, Const, EditInlineNew)
class UOakCondition_Grenade_Element : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UOakCondition_Grenade_Element();
};

