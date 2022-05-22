#pragma once
#include "CoreMinimal.h"
#include "GFxDuelTimerTotemData.generated.h"

class UGFxDuelTimerTotemObject;
class UOakDuelingWidgetTotemComponent;

USTRUCT(BlueprintType)
struct FGFxDuelTimerTotemData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxDuelTimerTotemObject* TimerClip;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakDuelingWidgetTotemComponent> AttachedDuelTotemComponent;
    
    UPROPERTY(Transient)
    bool bInUse;
    
    OAKGAME_API FGFxDuelTimerTotemData();
};

