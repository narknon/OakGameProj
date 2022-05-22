#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxIronbearExitAnimationWidget.generated.h"

class UGbxGFxHintWidget;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxIronbearExitAnimationWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ExitHintWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* EjectHintTextField;
    
    UPROPERTY(EditAnywhere)
    FText EjectHintText;
    
public:
    UGFxIronbearExitAnimationWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHoldPromptPercentage(float NewPecentage) const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void OnExitStarted() const;
    
    UFUNCTION()
    void OnExitCanceled() const;
    
};

