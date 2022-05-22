#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuSubmenu.h"
#include "MayhemModifierSet.h"
#include "GbxMenuInputEvent.h"
#include "GFxMayhemMenu.generated.h"

class UGbxTextField;
class UGbxGFxGridScrollingList;
class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;
class UGbxGFxButton;
class UUIStatData;
class UGbxGFxDialogBox;

UCLASS()
class OAKGAME_API UGFxMayhemMenu : public UGFxStatusMenuSubmenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* InfoPanelHeader;
    
    UPROPERTY(Transient)
    UGbxTextField* InfoPanelBody;
    
    UPROPERTY(Transient)
    UGbxTextField* CurrentMayhemStatusText;
    
    UPROPERTY(Transient)
    UGbxTextField* ApplyWarningText;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelHeader;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelText1;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelText2;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelText3;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelBonusText1;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelBonusText2;
    
    UPROPERTY(Transient)
    UGbxTextField* StatsPanelBonusText3;
    
    UPROPERTY(Transient)
    UGbxTextField* ModifiersPanelHeader;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ModifiersList;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* MayhemOptionStatusSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* MayhemOptionLevelSlider;
    
    UPROPERTY(Transient)
    UGbxGFxButton* MayhemOptionApplyButton;
    
    UPROPERTY(Transient)
    TArray<UGbxTextField*> StatsArray;
    
    UPROPERTY(Transient)
    TArray<UUIStatData*> CollatedMayhemCoreUIStats;
    
    UPROPERTY(Transient)
    TArray<FMayhemModifierSet> ModifierSets;
    
    UPROPERTY(EditAnywhere)
    FText MayhemDescriptionText;
    
    UPROPERTY(EditAnywhere)
    FText ApplyWarningLocText;
    
    UPROPERTY(EditAnywhere)
    FText ApplyConfirmationLocText;
    
    UPROPERTY(EditAnywhere)
    FText VehicleWarningLocText;
    
public:
    UGFxMayhemMenu();
private:
    UFUNCTION()
    void OnMayhemValueChanged() const;
    
    UFUNCTION()
    void OnMayhemOptionFocused() const;
    
    UFUNCTION()
    void OnMayhemExitDialogChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMayhemApplyChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMayhemApplyButtonClicked() const;
    
    UFUNCTION()
    void OnMayhemActivationChanged() const;
    
};

