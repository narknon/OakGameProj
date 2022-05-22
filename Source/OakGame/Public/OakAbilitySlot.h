#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakAbilitySlot.generated.h"

USTRUCT(BlueprintType)
struct FOakAbilitySlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 LevelUnlock;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SlotID;
    
    OAKGAME_API FOakAbilitySlot();
};

