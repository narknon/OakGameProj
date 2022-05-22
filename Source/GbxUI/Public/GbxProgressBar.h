#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "GbxProgressBarInterpolator.h"
#include "EGbxProgressBarFillDirection.h"
#include "GbxProgressBarRange.h"
#include "UObject/NoExportTypes.h"
#include "GbxProgressBar.generated.h"

class UTexture2D;
class UImage;
class UTextBlock;
class UWidgetAnimation;
class UWidget;

UCLASS(EditInlineNew)
class GBXUI_API UGbxProgressBar : public UGbxUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxProgressBarRangeEvent, const FName&, RangeName);
    DECLARE_DYNAMIC_DELEGATE(FGbxProgressBarEvent);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* FillTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowDeltaBar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* DeltaTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* DeltaEffectTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* BackgroundTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGbxProgressBarFillDirection FillDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Percent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Shear;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxProgressBarInterpolator DefaultInterpolator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGbxProgressBarRange> Ranges;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxProgressBarEvent OnInterpolationComplete;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxProgressBarRangeEvent OnEnterRange;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* Fill;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* DeltaEffect;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* CurrentValueText;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* MaxValueText;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxUserWidget* PercentAnimationOwner;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UWidgetAnimation* PercentAnimation;
    
    UGbxProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetShear(float InShear);
    
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
    
    UFUNCTION(BlueprintPure)
    bool IsInterpolating() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToPercentWithInterpolator(float InPercent, const FGbxProgressBarInterpolator& Interpolator);
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToPercent(float InPercent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleShowDeltaEffect(UWidget* Effect, float OldValue, float CurrentValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const FGbxProgressBarInterpolator& ActiveInterpolator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleEnterPercentRange(const FName& RangeName);
    
    UFUNCTION(BlueprintPure)
    float GetShear() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercent() const;
    
    UFUNCTION(BlueprintCallable)
    static bool EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
    
};

