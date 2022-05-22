#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "OakCondition_IronBearOwner_TestModsSlotted.generated.h"

class UOakActionAbilityAugmentData;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;

UCLASS(CollapseCategories, EditInlineNew)
class UOakCondition_IronBearOwner_TestModsSlotted : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakActionAbility> OakActionAbility;
    
    UPROPERTY(EditAnywhere)
    UOakActionAbilityAugmentSlotData* AugmentSlot;
    
    UPROPERTY(EditAnywhere)
    UOakActionAbilityAugmentSlotData* HardpointSlot;
    
    UPROPERTY(EditAnywhere)
    UOakActionAbilityAugmentData* HardpointToTest;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakActionAbilityAugmentData*> AugmentData;
    
    UPROPERTY(EditAnywhere)
    bool bTestNoModsSlotted;
    
public:
    UOakCondition_IronBearOwner_TestModsSlotted();
};

