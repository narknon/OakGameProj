#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxItemInspectionSkinCell.generated.h"

class UWeaponSkinPartData;

UCLASS(NonTransient)
class UGFxItemInspectionSkinCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UWeaponSkinPartData> SkinPart;
    
public:
    UGFxItemInspectionSkinCell();
};

