#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCurrencyCounterCategoryData.h"
#include "GFxCurrencyCounterQueueInfo.h"
#include "EGFxCurrencyCounterState.h"
#include "Engine/EngineTypes.h"
#include "GFxCurrencyCounterClip.generated.h"

class UGFxUISpinnerWidget;
class UInventoryCategoryData;

UCLASS(NonTransient)
class UGFxCurrencyCounterClip : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGFxCurrencyCounterCategoryData> Categories;
    
    UPROPERTY(Transient)
    TArray<UGFxUISpinnerWidget*> SpinnerWidgets;
    
    UPROPERTY(Transient)
    int32 CurrentDisplayedValue;
    
    UPROPERTY(Transient)
    EGFxCurrencyCounterState CurrencyCounterState;
    
    UPROPERTY(Transient)
    FTimerHandle HoldOnValueTimerHandle;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AnimationContainer;
    
    UPROPERTY(Transient)
    TArray<FGFxCurrencyCounterQueueInfo> CounterQueue;
    
    UPROPERTY(EditAnywhere)
    float TotalSpinnerHeightOverride;
    
    UPROPERTY(EditAnywhere)
    float CostSpinTime;
    
    UPROPERTY(EditAnywhere)
    float PauseOnNewValueTime;
    
    UPROPERTY(Transient)
    bool bGamePaused;
    
    UPROPERTY(EditAnywhere)
    int32 TotalSliders;
    
public:
    UGFxCurrencyCounterClip();
protected:
    UFUNCTION()
    void OnPostChangeDisplayHoldComplete();
    
    UFUNCTION()
    void OnDisplayValueAnimationComplete();
    
    UFUNCTION()
    void OnCurrencyQuantityChanged(const UInventoryCategoryData* ItemCategory, int32 Quantity);
    
};

