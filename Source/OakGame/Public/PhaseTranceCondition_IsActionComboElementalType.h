#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "PhaseTranceCondition_IsActionComboElementalType.generated.h"

class UGbxDamageType;

UCLASS(CollapseCategories, EditInlineNew)
class UPhaseTranceCondition_IsActionComboElementalType : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
public:
    UPhaseTranceCondition_IsActionComboElementalType();
};

