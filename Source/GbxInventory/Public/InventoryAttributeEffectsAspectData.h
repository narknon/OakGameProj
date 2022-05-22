#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "GameplayTagContainer.h"
#include "AttributeEffectData.h"
#include "InventoryAttributeEffectsAspectData.generated.h"

UCLASS(EditInlineNew)
class GBXINVENTORY_API UInventoryAttributeEffectsAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FGameplayTagContainer ComparisonTags;
    
    UPROPERTY(EditInstanceOnly)
    bool bResetAttributes;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FAttributeEffectData> InventoryAttributeEffects;
    
public:
    UInventoryAttributeEffectsAspectData();
};

