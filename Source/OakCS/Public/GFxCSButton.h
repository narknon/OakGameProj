#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuInputDevice.h"
#include "GbxGFxListCell.h"
#include "GFxCSButton.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKCS_API UGFxCSButton : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* HintText;
    
public:
    UGFxCSButton();
    UFUNCTION()
    void OnInputDeviceChanged(const EGbxMenuInputDevice NewInputDevice);
    
};

