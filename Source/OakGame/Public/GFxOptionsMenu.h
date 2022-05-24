#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxOptionsMenu.generated.h"

class UGFxMainOptionPanel;
class UGbxInputRebindContext;
class UOptionDescriptionData;
class UGbxGFxMenuData;
class UGbxInputRebindCategory;
class UGFxOptionBase;
class UGbxTextField;
class UGbxGFxButton;
class UGbxGFxDialogBox;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxOptionsMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UGbxInputRebindContext>> ControllerSchemesWalking;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxGFxMenuData* SafeFrameMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxGFxMenuData* HDRCalibrationMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxInputRebindCategory> KeyBindCategory_Common;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxInputRebindCategory> KeyBindCategory_Walking;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxInputRebindCategory> KeyBindCategory_Driving;
    
    UPROPERTY(EditDefaultsOnly)
    FText RestartRequiredText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseScaleMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseScaleMaxValue;
    
private:
    UPROPERTY(Transient)
    UGFxOptionBase* CurrentMenu;
    
    UPROPERTY(EditAnywhere)
    UOptionDescriptionData* OptionsDescriptionGlobal;
    
public:
    UPROPERTY(Transient)
    UGFxMainOptionPanel* MainPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* RestartTextField;
    
    UGFxOptionsMenu();
private:
    UFUNCTION()
    void SubtitleNavigationClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSubtitlesButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRestoreDefaultChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnNonStadiaControllerDialogClicked(const UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnContentPanelSelectionChanged(UGbxGFxListCell* SelectedItem) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

