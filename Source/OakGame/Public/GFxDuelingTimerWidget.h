#pragma once
#include "CoreMinimal.h"
#include "GFxDuelingWidget.h"
#include "GFxDuelTimerTotemData.h"
#include "GFxDuelingTimerWidget.generated.h"

class UOakDuelingWidgetTotemComponent;
class UCurveFloat;
class UGFxDuelingTimerObject;

UCLASS()
class UGFxDuelingTimerWidget : public UGFxDuelingWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceScaleCurve;
    
private:
    UPROPERTY(Transient)
    UGFxDuelingTimerObject* HudTimerClip;
    
    UPROPERTY(Transient)
    TArray<FGFxDuelTimerTotemData> TotemTimers;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakDuelingWidgetTotemComponent> DuelTotemComponent;
    
    UPROPERTY(Transient)
    int32 TimerCount;
    
    UPROPERTY(Transient)
    bool bHudTimeActive;
    
public:
    UGFxDuelingTimerWidget();
    UFUNCTION()
    void extOnDuelTimerHidden() const;
    
};

