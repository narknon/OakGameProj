#pragma once
#include "CoreMinimal.h"
#include "GFxLobbyWidgetSettingList.h"
#include "GbxMenuInputEvent.h"
#include "PrivacySettingList.generated.h"

class UGbxGFxDialogBox;

UCLASS(NonTransient)
class UPrivacySettingList : public UGFxLobbyWidgetSettingList {
    GENERATED_BODY()
public:
    UPrivacySettingList();
private:
    UFUNCTION()
    void OnConfirmChangeNetworkMode(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo);
    
};

