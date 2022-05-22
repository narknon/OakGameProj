#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxEmoteWheelButton.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxEmoteWheelButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText RolloverLabel;
    
    UGFxEmoteWheelButton();
};

