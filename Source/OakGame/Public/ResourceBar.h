#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "ResourceBar.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(EditInlineNew)
class UResourceBar : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UProgressBar* ValueBar;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* CurrentValueText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* MaxValueText;
    
    UResourceBar();
    UFUNCTION(BlueprintCallable)
    void SetTextMaxValue(FText NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetTextCurrentValue(FText NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(float NewValue);
    
};

