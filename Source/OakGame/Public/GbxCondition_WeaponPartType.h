#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EOakWeaponPartType.h"
#include "GbxCondition_WeaponPartType.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UGbxCondition_WeaponPartType : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EOakWeaponPartType PartType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 PartValue;
    
    UGbxCondition_WeaponPartType();
};

