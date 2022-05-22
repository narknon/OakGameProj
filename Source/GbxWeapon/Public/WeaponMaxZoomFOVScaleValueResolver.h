#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "WeaponMaxZoomFOVScaleValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXWEAPON_API UWeaponMaxZoomFOVScaleValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bInvertValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyWeaponModeZoom: 1;
    
    UWeaponMaxZoomFOVScaleValueResolver();
};

