#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GbxGFxNewGameSettingsButton.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGbxGFxNewGameSettingsButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* Icon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Sparkle;
    
public:
    UGbxGFxNewGameSettingsButton();
};

