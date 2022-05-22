#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EGFxDuelingTimerState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxDuelingTimerObject.generated.h"

class ADuelTotem;
class ADuelArena;
class UOakDuelingWidgetTotemComponent;
class UGFxDuelingTimerWidget;
class UCurveFloat;

UCLASS(NonTransient)
class UGFxDuelingTimerObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<ADuelTotem> DuelTotem;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ADuelArena> DuelArena;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakDuelingWidgetTotemComponent> DuelWidgetTotemComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxDuelingTimerWidget> OwningWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UCurveFloat> DistanceScaleCurve;
    
    UPROPERTY(Transient)
    EGFxDuelingTimerState TimerState;
    
    UPROPERTY(Transient)
    int32 NumChallengers;
    
    UPROPERTY(Transient)
    bool bHasBeenInited;
    
    UPROPERTY(Transient)
    float CachedDistanceAwayFromItem;
    
    UPROPERTY(Transient)
    FTransform OriginalRootDisplayTransform;
    
    UPROPERTY(Transient)
    FVector CachedItemPosition;
    
    UPROPERTY(Transient)
    bool bIsHudWidget;
    
    UPROPERTY(Transient)
    bool IsSplitscreenBottom;
    
public:
    UGFxDuelingTimerObject();
};

