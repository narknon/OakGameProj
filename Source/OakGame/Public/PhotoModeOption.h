#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeOptionEffect.h"
#include "PhotoModeOption.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeOption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText OptionName;
    
    UPROPERTY(EditAnywhere)
    EPhotoModeOptionEffect OptionEffect;
    
    UPROPERTY(EditAnywhere)
    bool bIsSlider;
    
    UPROPERTY(EditAnywhere)
    float SliderDisplayMin;
    
    UPROPERTY(EditAnywhere)
    float SliderDisplayMax;
    
    UPROPERTY(EditAnywhere)
    float SliderOutputMin;
    
    UPROPERTY(EditAnywhere)
    float SliderOutputMax;
    
    UPROPERTY(EditAnywhere)
    bool bSliderDisplayAsInteger;
    
    UPROPERTY(EditAnywhere)
    float SliderStepping;
    
    UPROPERTY(EditAnywhere)
    int32 SliderRepeatsToAccelerate;
    
    UPROPERTY(EditAnywhere)
    int32 SliderMaxIncreases;
    
    UPROPERTY(EditAnywhere)
    int32 SliderFastestSteps;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> SpinnerOptions;
    
    OAKGAME_API FPhotoModeOption();
};

