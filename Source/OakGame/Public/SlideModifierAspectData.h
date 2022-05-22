#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "EOakElementalType.h"
#include "SlideModifierAspectData.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class USlideModifierAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOakElementalType ElementalType;
    
    USlideModifierAspectData();
};

