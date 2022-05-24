#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxTutorialDialogWidget.generated.h"

class UGbxGFxHintBarContainer;
class UGbxHintBar;

UCLASS(NonTransient)
class OAKGAME_API UGFxTutorialDialogWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxHintBarContainer* HintBarContainerClip;
    
    UPROPERTY(Transient)
    UGbxHintBar* HintBar;
    
    UPROPERTY(Transient)
    bool bAdvanceOnKeyPress;
    
    UPROPERTY(Transient)
    bool bIsFinalStageOfTutorial;
    
    UPROPERTY(Transient)
    bool bAllowTutorialSkip;
    
public:
    UGFxTutorialDialogWidget();
};

