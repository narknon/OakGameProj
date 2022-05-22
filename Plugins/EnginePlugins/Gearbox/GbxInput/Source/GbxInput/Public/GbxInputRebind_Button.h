#pragma once
#include "CoreMinimal.h"
#include "GbxInputButton.h"
#include "GbxInputRebind_Button.generated.h"

class UGbxInputKeyRebindData_Button;

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputRebind_Button {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGbxInputKeyRebindData_Button* Binding;
    
    UPROPERTY(EditAnywhere)
    FGbxInputButton BUTTON;
    
public:
    FGbxInputRebind_Button();
};

