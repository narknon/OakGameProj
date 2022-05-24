#pragma once
#include "CoreMinimal.h"
#include "DamageFilter.h"
#include "EOakElementalType.h"
#include "OakDamageFilter.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UOakDamageFilter : public UDamageFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bFilterElementalType;
    
    UPROPERTY(EditAnywhere)
    EOakElementalType ElementalTypeFilter;
    
public:
    UOakDamageFilter();
};

