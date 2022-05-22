#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCellWithData.h"
#include "GbxGFxListItemNumber.generated.h"

class UGbxTextField;
class UGbxGFxSlider;

UCLASS(NonTransient, Config=GbxUI)
class GBXUI_API UGbxGFxListItemNumber : public UGbxGFxListCellWithData {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 SliderRepeatsToAccelerate;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SliderMaxIncreases;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SliderFastestSteps;
    
private:
    UPROPERTY(Transient)
    UGbxGFxSlider* SliderItem;
    
    UPROPERTY(Transient)
    UGbxTextField* ValueItem;
    
public:
    UGbxGFxListItemNumber();
private:
    UFUNCTION()
    void OnSliderUpdated(float SliderPct);
    
};

