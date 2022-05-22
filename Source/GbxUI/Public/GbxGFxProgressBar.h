#pragma once
#include "CoreMinimal.h"
#include "GbxProgressBarInterpolator.h"
#include "GbxGFxObject.h"
#include "GbxProgressBarRange.h"
#include "GbxProgressBarRangeEventDelegate.h"
#include "GbxProgressBarEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxProgressBar.generated.h"

UCLASS(Blueprintable, NonTransient)
class GBXUI_API UGbxGFxProgressBar : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Percent;
    
    UPROPERTY(Transient)
    int32 NumFillFrames;
    
    UPROPERTY(Transient)
    int32 NumDeltaBarFrames;
    
    UPROPERTY(Transient)
    int32 NumBackgroundBarFrames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxProgressBarInterpolator DefaultInterpolator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGbxProgressBarRange> Ranges;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EdgeFlashID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString EdgeFlashInnerID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString FillBarId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DeltaBarId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString BackgroundBarId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CurrentValueLabelId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MaxValueLabelId;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxProgressBarEvent OnInterpolationComplete;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxProgressBarRangeEvent OnEnterRange;
    
    UPROPERTY(Transient)
    FGbxProgressBarInterpolator Interpolator;
    
    UGbxGFxProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValueText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValueText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToPercentWithInterpolator(float InPercent, const FGbxProgressBarInterpolator& NewInterpolator);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToPercent(float InPercent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const FGbxProgressBarInterpolator& ActiveInterpolator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleEnterPercentRange(const FName& RangeName);
    
    UFUNCTION(BlueprintPure)
    float GetPercent() const;
    
    UFUNCTION(BlueprintCallable)
    static bool EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
    
};

