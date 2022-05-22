#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxCharacterSelectButton.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxCharacterSelectButton : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ShadowTextField;
    
public:
    UGFxCharacterSelectButton();
};

