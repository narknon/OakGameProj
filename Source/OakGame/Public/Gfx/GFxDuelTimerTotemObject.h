#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxDuelTimerTotemObject.generated.h"

class UGFxDuelingTimerObject;

UCLASS(NonTransient)
class UGFxDuelTimerTotemObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxDuelingTimerObject* TimerClip;
    
public:
    UGFxDuelTimerTotemObject();
};

