#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxOptionsControlsPanel.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxOptionsControlsPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* TitleLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* TooltipLine1;
    
    UPROPERTY(Transient)
    UGbxTextField* TooltipLine2;
    
public:
    UGFxOptionsControlsPanel();
};

