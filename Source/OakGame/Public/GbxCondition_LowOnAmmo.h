#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_LowOnAmmo.generated.h"

class UGameResourceData;

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UGbxCondition_LowOnAmmo : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGameResourceData* AmmoResource;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoadedAmmo: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsePercent: 1;
    
    UPROPERTY(EditAnywhere)
    float LowAmmoPercent;
    
public:
    UGbxCondition_LowOnAmmo();
};

