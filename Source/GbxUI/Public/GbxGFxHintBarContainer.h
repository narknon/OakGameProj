#pragma once
#include "CoreMinimal.h"
#include "GbxGFxGridScrollingList.h"
#include "GbxHintBarWidgetContainer.h"
#include "GbxGFxHintBarContainer.generated.h"

class UGbxHintBar;
class AGbxPlayerController;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxHintBarContainer : public UGbxGFxGridScrollingList, public IGbxHintBarWidgetContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxHintBar> HintBarOwningBar;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> HintBarOwnerPC;
    
public:
    UGbxGFxHintBarContainer();
    
    // Fix for true pure virtual functions not being implemented
};

