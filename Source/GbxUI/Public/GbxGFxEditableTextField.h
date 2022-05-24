#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxVirtualKeyboardType.h"
#include "GbxGFxEditableTextField.generated.h"

UCLASS(NonTransient)
class GBXUI_API UGbxGFxEditableTextField : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bConfirmOnFocusOut;
    
private:
    UPROPERTY(EditAnywhere)
    FString EditText;
    
    UPROPERTY(EditAnywhere)
    bool bMultiline;
    
    UPROPERTY(EditAnywhere)
    GFxVirtualKeyboardType KeyboardType;
    
    UPROPERTY(EditAnywhere)
    bool bLoseFocusOnConfirm;
    
protected:
    UPROPERTY(EditAnywhere)
    FName OnTextSubmittedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    FName OnTextEditAbortedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    FName OnTextInputAudioEventName;
    
public:
    UGbxGFxEditableTextField();
};

