#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxResolutionsMenu.generated.h"

class UGbxGFxButton;
class UGbxGFxGridScrollingList;
class UGbxGFxObject;
class UGbxGFxDialogBox;

UCLASS()
class UGFxResolutionsMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AlternateBkg;
    
    UPROPERTY()
    UGbxGFxDialogBox* ResolutionDlg;
    
public:
    UGFxResolutionsMenu();
private:
    UFUNCTION()
    void OnResolutionItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnConfirmNewResolution(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
};

