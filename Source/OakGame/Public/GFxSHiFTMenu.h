#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenu.generated.h"

class AGbxPlayerController;
class UGbxGFxDialogBox;

UCLASS()
class OAKGAME_API UGFxSHiFTMenu : public UGFxEchoNetSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> TargetPC;
    
public:
    UGFxSHiFTMenu();
private:
    UFUNCTION()
    void HandleEULAResponse(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
};

