#pragma once
#include "CoreMinimal.h"
#include "GbxListItem.h"
#include "GbxListItemNumber.generated.h"

class USlider;

UCLASS(EditInlineNew)
class GBXUI_API UGbxListItemNumber : public UGbxListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USlider* ValueSlider;
    
    UGbxListItemNumber();
protected:
    UFUNCTION()
    void OnSliderValueChanged(float NewPosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementSlider();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentValue();
    
    UFUNCTION(BlueprintCallable)
    void DecrementSlider();
    
};

