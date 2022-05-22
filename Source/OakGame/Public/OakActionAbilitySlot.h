#pragma once
#include "CoreMinimal.h"
#include "OakAbilitySlot.h"
#include "OakActionAbilitySlot.generated.h"

USTRUCT(BlueprintType)
struct FOakActionAbilitySlot : public FOakAbilitySlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOakAbilitySlot> AugmentSlots;
    
    OAKGAME_API FOakActionAbilitySlot();
};

