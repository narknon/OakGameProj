#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GbxMenuInputEvent.h"
#include "OakLocalPlayer.generated.h"

class UGbxGFxDialogBox;

UCLASS(NonTransient)
class UOakLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UOakLocalPlayer();
    UFUNCTION()
    void OnConfirmSignIntoAccount(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
};

