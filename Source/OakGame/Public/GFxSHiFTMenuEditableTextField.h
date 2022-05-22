#pragma once
#include "CoreMinimal.h"
#include "GbxGFxEditableTextField.h"
#include "GFxSHiFTMenuEditableTextField.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuEditableTextField : public UGbxGFxEditableTextField {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextField;
    
public:
    UGFxSHiFTMenuEditableTextField();
};

