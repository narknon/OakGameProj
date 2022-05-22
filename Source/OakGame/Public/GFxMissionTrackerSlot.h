#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxMissionTrackerSlot.generated.h"

UCLASS(NonTransient)
class UGFxMissionTrackerSlot : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FText CurrentText;
    
public:
    UGFxMissionTrackerSlot();
};

