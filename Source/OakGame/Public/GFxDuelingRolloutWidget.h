#pragma once
#include "CoreMinimal.h"
#include "GFxDuelingWidget.h"
#include "GFxDuelingRolloutWidget.generated.h"

class UGFxDuelingRolloutObject;

UCLASS()
class UGFxDuelingRolloutWidget : public UGFxDuelingWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxDuelingRolloutObject* RolloutClip;
    
    UPROPERTY(Transient)
    bool bRolloutPlaying;
    
public:
    UGFxDuelingRolloutWidget();
    UFUNCTION()
    void extOnRolloutAnimationEnded() const;
    
};

