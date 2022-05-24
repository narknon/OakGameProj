#pragma once
#include "CoreMinimal.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GFxEchoNetSubMenu.h"
#include "GFxFrontendLandingMenu.generated.h"

class UGFxFrontendLandingPage;
class UGbxGFxButton;

UCLASS()
class UGFxFrontendLandingMenu : public UGFxEchoNetSubMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxFrontendLandingPage* LandingPageClip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxButton> GoOnlineButtonClip;
    
public:
    UGFxFrontendLandingMenu();
    
    // Fix for true pure virtual functions not being implemented
};

