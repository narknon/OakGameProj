#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_DoesAnyPlayerHaveLowHealth.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_DoesAnyPlayerHaveLowHealth : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bIncludeLowHealth;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeVeryLowHealth;
    
    UPROPERTY(EditAnywhere)
    bool bAccountForReservedHealth;
    
public:
    UGbxCondition_DoesAnyPlayerHaveLowHealth();
};

