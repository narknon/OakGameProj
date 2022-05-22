#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsWeaponHidden.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsWeaponHidden : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 WeaponSlotIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseWeaponSlotIndex;
    
    UGbxCondition_IsWeaponHidden();
};

