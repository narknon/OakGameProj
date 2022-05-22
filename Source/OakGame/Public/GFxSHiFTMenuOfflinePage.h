#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuOfflinePage.generated.h"

class UGbxGFxObject;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuOfflinePage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* MainContainer;
    
    UPROPERTY(Transient)
    UGbxGFxButton* RetryButton;
    
public:
    UGFxSHiFTMenuOfflinePage();
private:
    UFUNCTION()
    void OnClickRetry(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

